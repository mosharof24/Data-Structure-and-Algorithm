//Finding the absolute value of a number entered through the keyboard.
#include <iostream>
using namespace std;

int main(){
    float n;
    
    cout << "Enter a number:" << endl;
    cin >> n;

    cout << "Absolute value of the number is " << abs(n) << endl;

    return 0;
}