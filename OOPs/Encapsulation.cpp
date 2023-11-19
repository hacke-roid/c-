#include<iostream>
using namespace std;

class Student {

    //encapsulation
    private:
    string name;
    int age;
    int height;

    public:
    int health=50;

    int getAge() {
        return this->age;
    }

    int setAge(int a){
        age=a;
    }
};

int main() {

    Student first;
    first.setAge(20);
    first.health;
    cout<<"Health : "<<first.health<<endl;
    cout<<"Age : "<<first.getAge()<<endl;

}