#include<iostream>
using namespace std;

int main() {
    float a,b;
    char op;
    cout<< "Enter the value of a and b"<< endl;
    cin>> a;
    cin>> b;
    cout<< "Enter the operator"<< endl;
    cin>> op;

    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        if(b!=0){
            cout<<a/b<<endl;
        }
        else
            cout<<"Can't divide by 0"<<endl;
        break;
    
    default:
        cout<<"Invalid operator"<<endl;
        break;
    }
}