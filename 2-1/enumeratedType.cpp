#include<iostream>
using namespace std;

int main(){
    enum days_of_week {monday, tuesday, wednesday, Thursday, friday, saturday, sunday};
    days_of_week first_day = monday;
    cout << first_day << endl;
    cout << Thursday << endl << endl;;

    for (int i=0; i<=friday; i++){
        cout << i << " ";
    }
    cout << endl << endl;

    //need to know:

    /*enum Throws {R = 'R', P = 'P', S = 'S'};
    char userInput;
    cout << "What is your throw : ";
    cin >> userInput;
    Throws userThrow = (Throws)userInput;

    cout << userThrow <<  endl;*/

    return 0;
}