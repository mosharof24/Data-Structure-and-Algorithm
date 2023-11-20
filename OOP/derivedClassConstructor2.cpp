//when a derived class's object is created 
//bases are constructed first, then non-static data members, then the constructor of the derived class is called
//the base class constructor is called first when creating a obj of a derived class
#include<iostream>
using namespace std;

class parent1{
    public:
    parent1(){
        cout << "inside parent1" << endl;
    }
};

class parent2{
    public:
    parent2(){
        cout << "inside parent2" << endl;
    }
};

class child : public parent1, public parent2{
    public:
    child(){
        cout << "inside child class" << endl;
    }
};

int main(){
    child c1;
    child c2, c3;
    return 0;
}