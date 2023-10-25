#include <iostream>

using namespace std;

class Parent
{
public:
    Parent()
    {
        cout << "Parent" << endl;
    }
    virtual ~Parent()
    {
        cout << "~Parent" << endl;
    }
    void Say()
    {
        cout << "Parent Say" << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "Child" << endl;
    }
    virtual ~Child()
    {
        cout << "~Child" << endl;
    }
    void Say()
    {
        cout << "Child Say" << endl;
    }

    void ChildOnly()
    {
        cout << "Only Child" << endl;
    }
};

struct strData
{
    int a;
};


int main()
{
    // // 1. ������ ĳ����
    // int a = 4;
    // float b = 3.14;
    // a = b;
    // // 3 ���
    // cout << a << endl;

    // // 2. ����� ĳ����
    // int a;
    // float b = 3.14;
    // a = (int)b;
    // // 3 ���
    // cout << a << endl;

    // // 3.1 static_cast
    // // ���� static_cast<��ȯ�� ������Ÿ��>(��ȯ�� ����)
    // // float�� a�� int�� b�� ����
    // float a = 3.14;
    // int b = static_cast<int>(a);
    // // 3 ���
    // cout << b << endl;

    // Parent p;
    // Child c;
    // Parent* p_ptr;
    // Child* c_ptr;

    // // Parent ���
    // p = static_cast<Parent>(c);
    // p.Say();

    // // �Ұ���
    // // c = static_cast<Child>(p);
    // // c.Say();

    // // Parent ���
    // // upcast
    // p_ptr = static_cast<Parent*>(&c);
    // p_ptr->Say();

    // // Parent ���
    // p_ptr = static_cast<Child*>(&c);
    // p_ptr->Say();

    // // Child ���
    // // Only Child ���
    // // downcast
    // c_ptr = static_cast<Child*>(&p);
    // c_ptr->Say();
    // c_ptr->ChildOnly();

    // // 3.2 const_cast
    // // ���� const_cast<��ȯ�� Ÿ��>(��ȯ ���)
    // // ������ �� ������������ ��� ����
    
    // const int * a = new int(10);
    // int *b;

    // // 10 ���
    // cout << *a << endl;

    // b = const_cast<int*>(a);
    // *b = 20;

    // // 20 ���
    // cout << *a << endl;

    // char str[] = "CPP_STUDY";
    // const char *ptr = str;

    // //CPP_STUDY ���
    // cout << str << endl; 

    // char *c = const_cast<char*>(ptr);
    // c[0] = 'D';

    // // DPP_STUDY ���
    // cout << str << endl;

    // const int num = 30;
    // // �Ұ���
    // //int num2 = const_cast<int>(num);

    // // 3.3 reinterpret_cast
    // // ���� reinterpret_cast<��ȯ�� Ÿ��>(��ȯ ���) 
    // // ������ ������Ÿ�Գ��� ��ȯ�� ����ϴ� ĳ��Ʈ ������
    // // �������� �����ͷ� ��ȯ�� �� ������ �� �� �������� �������� �����ּҷ� ����
    
    // // int -> int* ���� a�� ���� �����ּҷ� �޴� ������ ptr1
    // // � �ּҸ� ����ų �� �𸥴�
    // int a = 71234561;
    // int *ptr1;
    // ptr1 = reinterpret_cast<int*>(a);

    // // int * -> char * �� ����ȯ
    // // �����Ϸ��� ���� �ٸ��� ���´�.
    // int *ptr2 = &a;
    // char *c;
    // c = reinterpret_cast<char*>(ptr2);

    // // ��� �ȵ�
    // cout << *c << endl;
    // // 1 ��� (�����Ϸ��� ���� �ٸ�)
    // printf("%d\n", *c);

    // //3. struct ���� ù��° int -> int *
    // //struct cube���� int �� ���� �ϳ��� ���� �ϹǷ�,
    // //ptr3�� int a������ �������� �� ����Ű�� �ֽ��ϴ�
    // strData p;
    // p.a = 20;
    // int * ptr3;
    // ptr3 = reinterpret_cast<int *>(&p);

    // // 20 ���
    // cout << *ptr3 << endl;

    // // 3.4 dynamic_cast
    // // ���� dynamic_cast<��ȯ�� Ÿ��>(��ȯ ���)
    // // Class�� ������ �Ǵ� �������� �� ����ȯ �� �����ϰ� down casting�� �ϱ� ���� ����Ѵ�.
    // // ��, �θ� Ŭ������ virtual �Լ��� �����ؾ� ���� �۵��Ѵ�.
 
    // // Parent ���
    // Parent* ptr_p = new Child();

    // // Child ���
    // Child* ptr_c;

    // // Parent Say ���
    // ptr_p->Say();

    // ptr_c = dynamic_cast<Child*>(ptr_p);

    // if (ptr_p == nullptr)
    // {
    //     cout << "Complie error" << endl;
    // }
    // // Child Say ���
    // ptr_c->Say();

    // 3.5 bit_cast
    // ���� bit_cast<��ȯ�� Ÿ��>(��ȯ ���)
    // C++ 20�� <bit> ����� bit_cast�� �߰��Ǿ���. 
    // bit_cast()�� reinterpret_cast()�� ���������, bit_cast()�� �־��� Ÿ�� Ÿ���� ���ο� ��ü�� �����ϰ� ���� ��ü�� ��Ʈ�� �����Ѵ�. 
    // bit_cast()�� ȿ�������� �ҽ� ��ü�� ��Ʈ�� �ؼ��Ѵ�. 
    // bit_cast()�� ����� ���� �ҽ��� Ÿ�� ��ü�� ũ�Ⱑ ���ƾ� �ϰ�, �Ѵ� ���� ������ ����(trivially copyable)�̾�� �Ѵ�.



    return 0;   
}