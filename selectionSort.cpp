#include<iostream>
using namespace std;

int selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        int j;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
            
        }
        swap(arr[minIndex], arr[j]);
        
    }
    
}

int printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr, n);
    printArr(arr, n);
    
}