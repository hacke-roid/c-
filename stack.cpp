#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;
    
    s.push("Hello");
    s.push("World");

    cout<<"The string is "<<s.top();
    cout<<endl;

    s.pop();
    cout<<"Top element "<<s.top()<<endl;
    s.pop();
    cout<<"Size of the stack is "<<s.size()<<endl;
}