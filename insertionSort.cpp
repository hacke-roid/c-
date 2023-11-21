#include<iostream>
using namespace std;

int sort(int arr[], int n){
    for(int i=0; i<n; i++){
        int temp = arr[i];
        int j;
        for(j=i-1; j>=0; j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            arr[j] = temp;
        }
        
    }
}

int printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, n);
    printArr(arr, n);
}