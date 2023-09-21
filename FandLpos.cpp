#include<iostream>
using namespace std;

int ArrPosition(int arr[], int n, int k){
    
    int i=0,j=n-1;
    while(i <n-1){
        if(arr[i++] == k){
            
            
            break;
        }
    }
    while(j >0){
        if(arr[j--] == k){
            break;
        }
    }
    cout << i-1 << ' ' <<j+1<<endl;
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    ArrPosition(arr, n, k);
    return 0;
    
}