#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,b;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int i=0;
    int ans = 0;
    while (n!=0)
    {
        b=n&1;
        ans = (b* pow(10,i))+ ans;
        n=n>>1;
        i++;
        
        
    } 

    cout<<ans<<endl;

}