#include<iostream>
#include<complex>
using namespace std;

int main(){
    complex <float> c1, c2, c;
    float x1, x2;

    cout << "enter real and imaginary part of c1 and c2" << endl;
    
    cin >> x1 >> x2;
    c1 = complex <float> (x1, x2);
    
    cin >> x1 >> x2;
    c2 = complex <float> (x1, x2);

    cout << real(c1) << " " << imag(c1) << endl;

    c = c1+c2;

    cout << real(c) << " " << imag(c) << endl;

    cout << "absolute value of c is " << abs(c) << endl;
    cout << "phase angle of c is " << arg(c) << endl;
    cout << "Norm value " << norm(c) << endl;
    cout << "Complex conjugate of c " << conj(c) << endl;
    cout << "square root of c is " << sqrt(c) << endl;
    cout << "5th power of complex number c is " << pow(c,5) << endl;
    cout << "exponential of complex number c is " << exp(c) << endl;
    cout << "logarithm of c is " << log(c) << endl;

    return 0;

}