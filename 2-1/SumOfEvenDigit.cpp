#include<iostream>
using namespace std;

int main(){
    int n,a;
    int sum = 0;

    cout << "Enter a number:";
    cin >> n;

    while(n!=0){
        a = n%10;
        n = n/10;
        if(a%2==0){
            sum += a;
        }
    }

    cout << "The sum of all even digit is " << sum << endl;

    return 0;
}