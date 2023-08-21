#include<iostream>
using namespace std;

int main(){
int N;
    cin>>N;

    int arr[N];

    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
    int s=0;
    int e=N-1;
    int mid;

    
    for(int i=s; i<=e; i++){
        mid=(s+e)/2;
        if(arr[mid]==key)
        cout<<mid;
        else if(key>arr[mid])
        s=mid+1;
        else{
            e=mid-1;
        }
        
    }
}
    