#include<iostream>
using namespace std;

int main(){
    int n;
    
    cin>>n;

    while (n>1)
    {
        if(n%2==0){
            cout<<"It is not a prime number"<<endl;
            break;
        }
        else{
            cout<<"It is prime number"<<endl;
            break;
        }
    }
    
}