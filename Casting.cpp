#include <iostream>

using namespace std;

int main()
{
    // 1. 묵시적 캐스팅
    int a = 3;
    float b = 3.14;
    a = b;
    // 3 출력
    cout << a << endl;

    return 0;   
}