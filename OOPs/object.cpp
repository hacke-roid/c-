#include<iostream>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    Hero() {
        cout<<"Default constructor called"<<endl;

    }


    //parameterised construtor
    Hero(int health, char level) {
        cout<<"this -> "<<this<<endl;
        this-> health = health;
        this-> level = level;
    }

    void print() {
        cout<<health<<endl;
        cout<<level<<endl;
    }

    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }
    int setHealth(int h) {
        health = h;
    }
    char setLevel(char ch) {
        level = ch;
    }
};

int main(){
    

    
    /*
    Hero suresh(70, 'c');
    suresh.print();

    Hero R(suresh);
    R.print();


    /*
    //object created in static way
    Hero ramesh(10);
    cout<<"Adress of h1: "<<&ramesh<<endl;
    ramesh.getHealth();

    //dynamic way
    Hero *b = new Hero(10);
    cout<<"Address of b: "<<&b<<endl;
    /*
    //static allocation
    
    h1.setHealth(70);
    h1.setLevel('A');
    cout<<"Health : "<<h1.getHealth()<<endl;
    cout<<"Level: "<<h1.getLevel()<<endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');

    cout<<"Health: "<<(*b).getHealth()<<endl;
    cout<<"Level: "<<(*b).getLevel()<<endl;

    cout<<"health: "<<b->getHealth()<<endl;
    cout<<"Level: "<<b->getLevel()<<endl;
    */
    
}