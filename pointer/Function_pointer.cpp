#include<iostream>

using namespace std;

int sum_of_square(int a, int b){
    return (a*a+b*b);
}

int main(){
    
    int (*p)(int, int);
    p = sum_of_square;   //p = &sum_of_square;
    
    cout << p(2,3) << endl;

    return 0;
}