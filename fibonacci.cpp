#include<iostream>
using namespace std;

int fib(int a, int b, int n){
    for (int i = 0; i <= n; i++)
    {
        int nextNum=a+b;
        cout<<nextNum<<" ";

        a=b;
        b=nextNum;
    }
    
}

int main() {
    int a,b,n;
    cin>>a>>b;
    
    cin>>n;
    
    int res=fib(a, b, n);

}