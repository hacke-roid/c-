#include<iostream>
using namespace std;

int main()
{
    char ch ;
    char num ;
    cin>>ch;
    cin>>num;

    cout <<  endl;
    switch (ch)
    {
    if(ch<='2'){
    case '1':
        cout<<"First"<< endl;
        break;
    case '2': switch (num)
    {
        case '3':
            cout<<"value of num is 4"<< endl;
            break;
        
        default:cout<<"Not a value"<<endl;
            break;
    }
        break;
    default:cout<<"It is default case"<< endl;
        break;
    }
    }
}