//A program to find the factorial value of any number entered through the keyboard.
#include <iostream>

using namespace std;

int main(){
    int j = 1, number;
    
    cout << "Enter the number you want the factorial of:" << endl;
    cin >> number;
    
    if (number<0)
        cout << "Enter positive number." << endl;
    else if (number==0)
        cout << "Factorial is one." << endl;
    else{
        for (int i=1; i<=number; i++) {
            j = j*i;
        }
        cout << "Factorial is " << j << endl;
    }
    
    return 0;

}