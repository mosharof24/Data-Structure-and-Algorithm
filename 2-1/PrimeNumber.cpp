#include<iostream>

using namespace std;

int main(){
    int n,a;

    cout<< "Enter the number:" << endl;
    cin >> n;

    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout << "The number is not a prime number" << endl;
            return 0;
        }
    }
    
    cout << "the number is a prime number" << endl;

    return 0;
}