#include<iostream>
#include<climits>
using namespace std;

int getMax(int arr[], int n){
    int max = INT_MIN;
    
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int n){
    int min = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}


int main()
{
    int size;
    cin>>size;
    int arr[size];
    int i=0;
    
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int n;
    getMax(arr,size);
    getMin(arr,size);
    cout<<getMax(arr,size)<<endl;
    cout<<getMin(arr,size)<<endl;
    
}