#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    cout<<"Capacity : "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity-> "<<v.capacity()<<endl;

    cout<<"Element in 2nd index "<<v.at(2)<<endl;

    cout<<"front"<<v.front()<<endl;

    v.push_back(5);
    cout<<"Capacity : "<<v.capacity()<<endl;
}