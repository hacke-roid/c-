#include<iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"ENter the the number"<<endl;
    cin>>a;
    cin>>b;

    int c=a&b;
    
    cout<<c<<endl;

    int i=7;

    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;
}