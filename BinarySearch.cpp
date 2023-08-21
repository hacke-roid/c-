#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){   
    int s=0;
    int e=n-1;
    int mid;

    mid=(s+e)/2;

    while (s<=e)
    {   
        
        if(arr[mid] == key){
            cout<<mid;
        }
        if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return -1;
    
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    binarySearch(arr, n, key);
}