#include<iostream>
using namespace std;


int alternateArr(int arr[], int n){
    int a=0;
    int b=1;

    while(a<n&&b<=n-1){
        swap(arr[a], arr[b]);
        a=a+2;
        b=b+2;
    }
}

int printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){

    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    alternateArr(arr, n);

    printArr(arr, n);
    
}