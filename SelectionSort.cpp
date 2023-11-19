#include<iostream>
using namespace std;

int SelectionSort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j]<arr[minIndex])
            {
                minIndex = j;
            }
            
        }
        swap(arr[minIndex], arr[i]);
        
    }
    

}

int printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}


int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    SelectionSort(arr, n);
    printArr(arr, n);
}