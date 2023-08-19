#include<iostream>
using namespace std;

int uniqueArr(int arr[], int n){
    int a=0,b=1;
    while(a<b){
        arr[a]^arr[b];
        
    }
    a++;
    b++;
}
int printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    uniqueArr(arr, n);
    printArr(arr, n);
}