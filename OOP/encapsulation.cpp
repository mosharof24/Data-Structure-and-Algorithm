#include<iostream>

using namespace std;

class resident{
    //Defining three private member variable
    private:
        string Name;
        string Dept;
        int Roll;

    public:
        //defining setter method for Name
        void setName(string name){
            Name = name;
        }
        //defining geter method for Name
        string getName(){
            return Name;
        }
        
        //defining setter method for Department
        void setDept(string dept){
            Dept = dept;
        }
        //defining geter method for Department
        string getDept(){
            return Dept;
        }
        
        //defining setter method for Roll
        void setRoll(int roll){
            Roll = roll;
        }
        //defining geter method for Name
        int getRoll(){
            return Roll;
        }


        //Defining cinstructor for class name resident
        resident(string name, string dept, int roll){
            Name = name;
            Dept = dept;
            Roll = roll;
        }

        //This method shows name, Department and roll of an object of class resident
        void show_info(){
            cout << "Name = " << Name << " Department = " << Dept << " Roll = " << Roll << endl;
        }
};

int main(){
    //defining an object of class resident and setting its attributes value using constructor
    resident resident1 = resident("Mosharof", "EEE", 1903024);
    resident1.show_info();

    //defining another object of class resident and setting its attributes value using constructor
    resident resident2 = resident("Siam", "EEE", 1903088);
    resident2.show_info();

    //accessing privatee variable using getter and setter method
    resident1.setName("Mosharof Hossain");
    resident1.show_info();
    //we can use getter method to get any private members value
    //we cannot directly get resident1.Name as Name is a private member
    cout << resident1.getName() << endl;
}