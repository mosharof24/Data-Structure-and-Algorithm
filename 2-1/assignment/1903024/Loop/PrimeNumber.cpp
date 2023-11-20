/*check if a number is a prime number*/

#include<iostream>

using namespace std;

int main(){
    int n,a;

    cout<< "Enter the number:" << endl;
    cin >> n;
    a = n/2;

    for(int i=2;i<=a;i++){
        if(n%i==0){
            cout << "The number is not a prime number" << endl;
            return 0;
        }
    }
    
    cout << "the number is a prime number" << endl;

    return 0;
}