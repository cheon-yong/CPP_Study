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
    // // 1. 묵시적 캐스팅
    // int a = 4;
    // float b = 3.14;
    // a = b;
    // // 3 출력
    // cout << a << endl;

    // // 2. 명시적 캐스팅
    // int a;
    // float b = 3.14;
    // a = (int)b;
    // // 3 출력
    // cout << a << endl;

    // // 3.1 static_cast
    // // 문법 static_cast<변환할 데이터타입>(변환할 변수)
    // // float인 a를 int인 b로 변경
    // float a = 3.14;
    // int b = static_cast<int>(a);
    // // 3 출력
    // cout << b << endl;

    // Parent p;
    // Child c;
    // Parent* p_ptr;
    // Child* c_ptr;

    // // Parent 출력
    // p = static_cast<Parent>(c);
    // p.Say();

    // // 불가능
    // // c = static_cast<Child>(p);
    // // c.Say();

    // // Parent 출력
    // // upcast
    // p_ptr = static_cast<Parent*>(&c);
    // p_ptr->Say();

    // // Parent 출력
    // p_ptr = static_cast<Child*>(&c);
    // p_ptr->Say();

    // // Child 출력
    // // Only Child 출력
    // // downcast
    // c_ptr = static_cast<Child*>(&p);
    // c_ptr->Say();
    // c_ptr->ChildOnly();

    // 3.2 const_cast
    // 문법 const_cast<변환할 타입>(변환 대상)
    // 포인터 및 참조형에서만 사용 가능
    
    const int * a = new int(10);
    int *b;

    // 10 출력
    cout << *a << endl;

    b = const_cast<int*>(a);
    *b = 20;

    // 20 출력
    cout << *a << endl;

    char str[] = "CPP_STUDY";
    const char *ptr = str;

    //CPP_STUDY 출력
    cout << str << endl; 

    char *c = const_cast<char*>(ptr);
    c[0] = 'D';

    // DPP_STUDY 출력
    cout << str << endl;

    const int num = 30;
    // 불가능
    //int num2 = const_cast<int>(num);

    return 0;   
}