#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,5,6};
    cout<<"Address of the first memory block : "<<arr<<endl;
    cout<<"Address of the first memory block : "<<&arr[0]<<endl;

    cout<<"address : "<<*arr+1<<endl;
}