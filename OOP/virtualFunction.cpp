#include<iostream>
using namespace std;

class parent1{
    public:
    void print(){
        cout <<"Hello from parent 1\n" <<endl;
    }
};

class child1 : public parent1{
    public:
    void print(){
        cout <<"Hello from child 1\n" <<endl;
    }
};

class parent2{
    public:
    virtual void print(){
        cout <<"Hello from parent 2\n" <<endl;
    }
};

class child2 : public parent2{
    public:
    void print(){
        cout <<"Hello from child 2\n" <<endl;
    }
};

int main(){
    child1 a;
    child2 b;

    parent1 *p1;
    p1 = &a;

    parent2 *p2;
    p2 = &b;

    //this will run print() of parent1 as print() is not virtual in parent1
    p1->print();
    //this will run print() of child2 as print() in parent2 is virtual
    p2->print();

    return 0;
}