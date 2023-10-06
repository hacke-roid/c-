#include<iostream>
using namespace std;

int findArr(int arr[], int n, int k){
    int start=0;
    int end=n-1;
    int mid;

    while (start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==k){
            return arr[mid];
        }

        else if(arr[mid]<k){
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
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

    int k;
    cin>>k;

    int m=findArr(arr, n, k);

    cout<<m<<endl;

}