//A positive integer is entered through the keyboard,
// write a program to obtain the prime factors of the number.
#include <iostream>
using namespace std;

int p_factors(int x);

int main(){
    int number;
    cout<<"Enter a positive number: "; cin>>number;
    cout<<"Prime factors are: ";
    p_factors(number);
    cout<<"Finished";
    return 0;
}

int p_factors(int x){
    for (int i = 1; i <=x ; i++) {
        if(x%i==0){
            int p=0;
            for (int j = 0; j <=i ; j++) {
                if(i%j==0)
                    p++;
            }
        if(p==2)
            cout<<i<<',';
        }
    }
}