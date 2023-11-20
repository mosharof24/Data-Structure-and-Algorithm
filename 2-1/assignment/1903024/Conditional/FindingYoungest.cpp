/*If the ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.*/

#include <iostream>

using namespace std;

int main(){
    float ram, shyam,ajay;
    
    cout<<"Enter Ram's age: ";
    cin>>ram;
    cout<<"Enter Shyam's age: ";
    cin>>shyam;
    cout<<"Enter Ajay's age: ";
    cin>>ajay;
    
    if (ram<shyam && ram<ajay)
        cout << "Ram is the youngest." << endl;
    else if (shyam<ram && shyam<ajay)
        cout << "Shyam is the youngest." << endl;
    else
        cout << "Ajay is the youngest." << endl;

    return 0;
}