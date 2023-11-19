#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    

    int getHealth() {
        return health;
    }

    int setHealth(int h) {
        health = h;
    }

    char getLevel() {
        return level;
    }

    char setLevel(char ch) {
        char level = ch;
    } 

    ~Hero() {
        cout<<"destructor called"<<endl;
    }

};


int main() {

    Hero a;
    a.setHealth(70);
    cout<<"Address : "<<&a<<endl;
    cout<<"Address of health: "<<a.getHealth()<<endl;

    Hero *b = new Hero;
    b->setHealth(20);
    b->setLevel('A');
    cout<<"Health : "<<b->getHealth()<<endl;
    cout<<"Level: "<<b->level<<endl;
    delete b;
    /*
    Hero h1;
    h1.setHealth(70);
    h1.setLevel('a');
    cout<<"Size : "<<h1.getHealth()<<endl;
    cout<<"Size : "<<h1.level<<endl;
    cout<<"Size :"<<sizeof(h1)<<endl;
    */
}