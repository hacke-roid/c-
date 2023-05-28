#include<iostream>
using namespace std;

int main(){
    int num,i=0,sum=0;
    cout<< "enter the number"<<endl;

    cin>>num;

    while(i<=num)
    {
        if(i%2==0){
            cout<<i<<" ";
            sum=sum+i;  
        }
        i=i+1;
        
    }
    cout<<"Sum of the number is: "<<sum<<endl;
}