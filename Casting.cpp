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

    // // 3.2 const_cast
    // // 문법 const_cast<변환할 타입>(변환 대상)
    // // 포인터 및 참조형에서만 사용 가능
    
    // const int * a = new int(10);
    // int *b;

    // // 10 출력
    // cout << *a << endl;

    // b = const_cast<int*>(a);
    // *b = 20;

    // // 20 출력
    // cout << *a << endl;

    // char str[] = "CPP_STUDY";
    // const char *ptr = str;

    // //CPP_STUDY 출력
    // cout << str << endl; 

    // char *c = const_cast<char*>(ptr);
    // c[0] = 'D';

    // // DPP_STUDY 출력
    // cout << str << endl;

    // const int num = 30;
    // // 불가능
    // //int num2 = const_cast<int>(num);

    // // 3.3 reinterpret_cast
    // // 문법 reinterpret_cast<변환할 타입>(변환 대상) 
    // // 임의의 포인터타입끼리 변환을 허용하는 캐스트 연산자
    // // 정수형을 포인터로 변환할 수 있으나 이 때 정수값이 포인터의 절대주소로 대입
    
    // // int -> int* 변수 a의 값을 절대주소로 받는 포인터 ptr1
    // // 어떤 주소를 가리킬 지 모른다
    // int a = 71234561;
    // int *ptr1;
    // ptr1 = reinterpret_cast<int*>(a);

    // // int * -> char * 로 형변환
    // // 컴파일러에 따라 다르게 나온다.
    // int *ptr2 = &a;
    // char *c;
    // c = reinterpret_cast<char*>(ptr2);

    // // 출력 안됨
    // cout << *c << endl;
    // // 1 출력 (컴파일러에 따라 다름)
    // printf("%d\n", *c);

    // //3. struct 내의 첫번째 int -> int *
    // //struct cube에는 int 형 변수 하나만 존재 하므로,
    // //ptr3은 int a변수의 시작점을 잘 가리키고 있습니다
    // strData p;
    // p.a = 20;
    // int * ptr3;
    // ptr3 = reinterpret_cast<int *>(&p);

    // // 20 출력
    // cout << *ptr3 << endl;

    // // 3.4 dynamic_cast
    // // 문법 dynamic_cast<변환할 타입>(변환 대상)
    // // Class의 포인터 또는 참조변수 간 형변환 시 안전하게 down casting을 하기 위해 사용한다.
    // // 단, 부모 클래스에 virtual 함수가 존재해야 정상 작동한다.
 
    // // Parent 출력
    // Parent* ptr_p = new Child();

    // // Child 출력
    // Child* ptr_c;

    // // Parent Say 출력
    // ptr_p->Say();

    // ptr_c = dynamic_cast<Child*>(ptr_p);

    // if (ptr_p == nullptr)
    // {
    //     cout << "Complie error" << endl;
    // }
    // // Child Say 출력
    // ptr_c->Say();

    // 3.5 bit_cast
    // 문법 bit_cast<변환할 타입>(변환 대상)
    // C++ 20에 <bit> 헤더에 bit_cast가 추가되었다. 
    // bit_cast()는 reinterpret_cast()와 비슷하지만, bit_cast()는 주어진 타겟 타입의 새로운 객체를 생성하고 원본 객체를 비트로 복사한다. 
    // bit_cast()는 효과적으로 소스 객체를 비트로 해석한다. 
    // bit_cast()를 사용할 때는 소스와 타겟 객체의 크기가 같아야 하고, 둘다 복사 가능한 형식(trivially copyable)이어야 한다.



    return 0;   
}