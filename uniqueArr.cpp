#include<iostream>
using namespace std;

int uniqueArr(int arr[], int n){
    kishanurankar   
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                break;
            }
            if (i==j)
            {
                cout<<arr[i];
            }
            
            
        }
        
    }
    
}