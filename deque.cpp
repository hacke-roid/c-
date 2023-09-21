#include<iostream>
#include<vector>
#include<array>
#include<list>

using namespace std;

int main(){
    int basic[3] = {1,2,3};

    array<int,5> a = {1,2,3,4,5};

    int size = a.size();
    cout<<size<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at 2nd index-> "<<a.at(2)<<endl;
    cout<<"Element is empty or not-> "<<a.empty()<<endl;

    cout<<"First element-> "<<a.front()<<endl;
    cout<<"Last element-> "<<a.back()<<endl;

    cout<<endl;

    vector<int> v;
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size-> "<<v.size()<<endl;

    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for (int i:l)
    {
        cout<<i<<" ";

    }

    cout<<endl;

    l.erase(l.begin());

    cout<<"After erase"<<endl;
    for (int i:l)   
    {
        cout<<i<<" ";
    }

    cout<<"Size of this"<<l.size()<<endl;
    
    
    
    

}