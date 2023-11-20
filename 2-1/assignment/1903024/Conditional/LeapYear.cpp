/*Input any year through the keyboard. Write a program to determine whether the year is a leap year or not.*/

#include <iostream>
using namespace std;
int main(){

    int year;
    
    cout << "Enter a year:" << endl;
    cin >> year;
    
    if (year%4==0 && year%100!=0)
        cout << "This year is a leap year." << endl;
    else if (year%400==0)
        cout << "This year is a leap year." << endl;
    else if (year%100==0)
        cout << "This year is not a leap year." << endl;
    else
        cout << "This year is not a leap year." << endl;

    return 0;

}