#include<iostream>
using namespace std;

int ArrSum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    return sum;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;

    for(int i=0; i<n; i++){
        cin>>arr[i];   
    }
    ArrSum(arr,n);
    cout<<ArrSum(arr,n)<<endl;
}