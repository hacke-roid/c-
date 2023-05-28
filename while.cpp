#include<iostream>
using namespace std;

int main()
{
    int a,i=1,sum=0;
    cout<< "Enter the number" << endl;
    cin>>a;

    while(i<=a){
        cout<<i<<" ";
        
        i=i+1;
        sum= sum+i;
        
    }
    cout<< "Sum of number is:" <<sum;
}