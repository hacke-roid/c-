#include<iostream>
using namespace std;

void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while (s<=e)
    {
        swap(name[e],name[s]);
        e++;
        s--;
    }

}

int getLength(char name[]){
    int count=0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main(){
    char name[10];
    
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Your Name is : "<<name<<endl;
    int len = getLength(name);
    cout<<"Length : "<<len<<endl;
    reverse(name, len);
    cout<<"Reverse : "<<name<<endl;
    cout<<endl;
}