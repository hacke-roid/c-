#include<iostream>
using namespace std;

int EveOdd(int a){
    if(a%2==0){
        cout<<"The number is even"<<endl;
    }
    else{
        cout<<"The number is odd"<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    EveOdd(n);
    
    int b;
    cout<<"Enter the number"<<endl;
    cin>>b;

    EveOdd(b);
}