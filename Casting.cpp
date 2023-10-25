#include <iostream>

using namespace std;

class Parent
{
public:
    void Say()
    {
        cout << "Parent" << endl;
    }
};

class Child : public Parent
{
public:
    void Say()
    {
        cout << "Child" << endl;
    }

    void ChildOnly()
    {
        cout << "Only Child" << endl;
    }
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

    // 3.2 const_cast
    // ���� const_cast<��ȯ�� Ÿ��>(��ȯ ���)
    // ������ �� ������������ ��� ����
    
    const int * a = new int(10);
    int *b;

    // 10 ���
    cout << *a << endl;

    b = const_cast<int*>(a);
    *b = 20;

    // 20 ���
    cout << *a << endl;

    char str[] = "CPP_STUDY";
    const char *ptr = str;

    //CPP_STUDY ���
    cout << str << endl; 

    char *c = const_cast<char*>(ptr);
    c[0] = 'D';

    // DPP_STUDY ���
    cout << str << endl;

    const int num = 30;
    // �Ұ���
    //int num2 = const_cast<int>(num);

    return 0;   
}