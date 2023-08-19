#include<iostream>
using namespace std;

int printArr(int num[], int size){
    cout<<"Print the array"<<endl;
    for(int i= 0; i<size; i++){
        cout<< num[i]<<" ";
    }
    cout<<endl;
    return 0;
}


int main()
{
    int num[5] = {1};
    int n=5;
    printArr(num,5);

    char ch[5] = {'a','b','c','d','e'};
    cout<<ch[3]<<endl;
}