//If variable of same name is present in both derived class's and in base class's
//then getter and setter method declared in base class's will work on the variable
//In the base class's similarly getter and setter method declared in derived class's will work on the variable
//in the derived class's
//An object of derived class can access it's base class's member variable as derived class's object can access 
//getter and setter method of it's base class's but a base can't access it's derived class's member variables as it can't
//access it's derived class's getter and setter method  
#include<iostream>
using namespace std;

class counter{
    private:
    int count;

    public:
    counter(){
        count = 0;
    }

    int get_count(){
        return count;
    }

    void set_count(int a){
        count = a;
    }
};

class countDn : public counter{
    int count;
    public:
    countDn(){
        counter();
    }
    countDn(int a){
        count = a;
    }

    int get_countOfCountdn(){
        return count;
    }

};

int main(){
    counter c1;
    countDn c2;
    countDn c3(4);

    //c2 and c3 are getting their base class count not their actual count because a member function from base class can't
    //access derived class's member
    cout << c1.get_count() << " " << c2.get_count() << " " << c3.get_count() << endl;
    //Though c2 and c3 has access to both of their count and their base class's count a getter method in countDn will
    //first search for count in countDn if not found then it will search for count in it's base class
    cout << c2.get_countOfCountdn() << " " << c3.get_countOfCountdn() << endl;

    //c2 and c3 are setting their base class count not their actual count because a member function from base class can't
    //access derived class's member
    c1.set_count(102); c2.set_count(90); c3.set_count(100);
    cout << c1.get_count() << " " << c2.get_count() << " " << c3.get_count() << endl;
    //we can verify that count of c2 and c3 is not changed
    cout << c2.get_countOfCountdn() << " " << c3.get_countOfCountdn() << endl;

    return 0;

}