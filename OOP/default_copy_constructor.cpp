#include<iostream>
using namespace std;

class student{
    int roll;
    string name;

    public:
        int a;
        int get_roll(){
            return roll;
        }
        
        string get_name(){
            return name;
        }
        
        void set_roll(int i){
            roll = i;
        }

        void set_name(string n){
            name = n;
        }
};

int main(){
    student s1;
    s1.set_roll(1903024);
    s1.set_name("mosharof");
    student s2(s1);             //everything of s1 is copied to s2
                                //we could also do student s2 = s1;
    cout << s2.get_name() << s2.get_roll() << endl;
    cout << s2.a << " " << s1.a << endl;

    return 0;
}