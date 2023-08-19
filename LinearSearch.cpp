#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0;i<n; i++){
        if(key == arr[i])
        return 1;
        else
        return 0;
    }
    
}


int main(){
    int arr[10] = {5,4,6,2,3,1,-4,5,1,2};
    cout<<"Enter the element to search "<<endl;
    int key;
    cin>>key;


    
    bool found = search(arr, 10 ,key);

    if (found)
    {
        cout<<"The key is present "<<endl;
    }
    else{
        cout<<"Key is not found "<<endl;
    }
    
}