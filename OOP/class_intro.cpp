#include<iostream>

using namespace std;

class Baitunnur{
    //All members are public; that as this members are accessible from anywhere in this program
    public:
        //Defining three member variable
        string Name;
        string Dept;
        int Roll;
        
        //Defining cinstructor for class name Baitunnur
        Baitunnur(){
            Name = "Msoharof";
            Dept = "EEE";
            Roll = 1903024;
        }

        //Overloading Constructor
        Baitunnur(string name, string dept, int roll){
            Name = name;
            Dept = dept;
            Roll = roll;
        }

        //This method shows name, Department and roll of an object of class Baitunnur
        void show_info(){
            cout << "Name = " << Name << " Department = " << Dept << " Roll = " << Roll << endl;
        }
};

int main(){
    //defining an object of class Baitunnur and setting its attributes value using constructor
    Baitunnur resident1;
    resident1.show_info();

    //defining another object of class Baitunnur and setting its attributes value using constructor
    Baitunnur resident2 = Baitunnur("Siam", "EEE", 1903088);
    resident2.show_info();
}