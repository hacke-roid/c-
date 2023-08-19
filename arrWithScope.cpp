#include<iostream>
using namespace std;

int update(int arr[], int n){
    cout<<"inside the function"<<endl;
    arr[0] = 120;
    for(int i=0; i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"outside the funtion"<<endl;
}


int main()
{
    int arr[3] = {1,2,3};

    update(arr, 3);

    for(int i=0; i<3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}