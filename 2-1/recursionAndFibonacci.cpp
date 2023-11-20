#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n>1){
        return n * fibonacci(n-1);
    }
    return 1;
}

int main(){
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << fibonacci(n) << endl;

    return 0;
}