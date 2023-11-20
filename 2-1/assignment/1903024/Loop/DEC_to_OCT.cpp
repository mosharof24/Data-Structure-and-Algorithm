//A program to find the octal equivalent of the entered n.
#include <iostream>

using namespace std;

int main(){

    int n, sem = 1, octal = 0;
    cout << "Enter the Decimal n:" << endl;
    cin >> n;

    while(n!=0)
    {
        octal = octal + (n%8) * sem;
        n = n/8;
        sem = sem*10;
    }

    cout << "Octal n is " << octal;

    return 0;
}