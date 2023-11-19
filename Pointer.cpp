#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    cout << &num << endl;

    int *ptr = &num;

    cout << ptr << endl;

    int num1 = 10;

    int *p = 0;
    p = &num1;

    cout << p << endl;
    cout << *p << endl;

    int num2 = 15;
    int a = num2;
    a++;
    cout << a << endl;

    // important code

    int i = 5;
    int *pt = &i;
    (*pt)++;
    cout << *pt << endl;
    cout << pt << endl;
    pt = pt + 1;
    cout << pt << endl;
}