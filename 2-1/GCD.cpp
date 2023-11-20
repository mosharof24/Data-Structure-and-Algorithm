#include<iostream>

using namespace std;

int GCD(int a, int b){
    int gcd;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }

    return gcd;
}

int main(){
    int a, b, gcd;
    
    cout << "Enter two number" << endl;
    cin >> a >> b;
    gcd = GCD(a, b);
    cout << "GCD of " << a << " and " << b << " is: " << gcd << endl;

    return 0;
}