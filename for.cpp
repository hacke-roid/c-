#include<iostream>
using namespace std;


int main(){
    int a;
    cout<<"enter  the number of a"<<endl;

    cin>>a;
    int i = 1;
    for (; ;)    
    {
        if (i<=a)
        {
            cout<< i << endl;
        }
        else{
            break;
        }
        i++;
        
    }
    
}