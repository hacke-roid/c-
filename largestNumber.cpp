#include<iostream>
#include<climits>
using namespace std;

int LargestArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i]<arr[j])
            swap(arr[i], arr[j]);
        }
        
    }
    
    int max = INT_MAX;
    
}

int PrintArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
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

    LargestArr(arr, n);
    PrintArr(arr, n);
    
}