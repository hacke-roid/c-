#include<iostream>
using namespace std;

int power(int a, int b){
     int ans = 1;

    for(int i=1; i<=b; i++){
        ans = ans * a;
    }
    return ans;
}


int main() {
    int a,b,c,d;
    cout<< "Enter the value of a and b"<<endl;
    cin>>a;
    cin>>b;
    
    int answer = power(a,b); 

     cout<<"Answer is : "<<answer<<endl;
    
    cin>>c;
    cin>>d;
    
    answer = power(c,d); 

     cout<<"Answer is : "<<answer<<endl;
    
    
}