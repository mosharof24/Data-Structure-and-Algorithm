#include<iostream>
#include<complex>


using namespace std;

int main(){
    complex <double> z1 = {1, 3};
    complex <double> z2 = {2.3, 5.6};

    complex <double> z = z1+z2;

    cout << z1 << "\n" << z2 << "\n" << z <<endl;

    return 0;
}