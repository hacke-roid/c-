#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge() {
        return this->age;
    }
    void setAge(int a){
        this-> age = a;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep() {
        cout<<"Male sleeping"<<endl;
    }
};

int main() {
    Male object1;
    
    object1.setAge(20);
    cout<<object1.getAge()<<endl;
}