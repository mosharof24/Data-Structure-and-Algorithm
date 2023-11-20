//A program to calculate sum of digits of an integer number.
#include <iostream>

using namespace std;

int DigitSum(int x){
    int sum = 0,digit;
    while(x!=0){
         digit = x%10;
         sum = sum+digit;
         x = x/10;
    }
    return sum;
}

int main(){

    int num;
    cout << "Enter an integer number:" << endl;
    cin >> num;
    cout << "Sum of digits are: " << DigitSum(num) << endl;

    return 0;
}