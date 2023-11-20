/*Two numbers are entered through the keyboard.
Write a program to find the value of one number raised to the power of another.*/
#include <iostream>

using namespace std;

int main(){
    int i, j, l = 1;
    
    cout << "Enter base number:" << endl;
    cin >> i;
    cout << "Enter exponential number:" << endl;
    cin >> j;

    for (int k=0; k<j; k++) {
        l = l*i;
    }
    
    cout << "Result is " << l << endl;
    
    return 0;
}