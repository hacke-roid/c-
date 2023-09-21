#include<iostream>
using namespace std;


int pairsum(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        
        {
            int k = arr[i]+arr[j];
            if (k==key)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
            
        }
        
    }
    return -1;  
    
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;

    pairsum(arr,n,key);
    
}