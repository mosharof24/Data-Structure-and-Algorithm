#include<iostream>

using namespace std;

int main(){
    int *p,*q,n;

    cout << "enter the size of array" << endl;
    cin >> n;

    p = (int*) malloc(n*sizeof(int));
    q = (int*) realloc(p, 2*n*sizeof(int));
    
    cout << p << '\n' << q << endl; // shows address in hex

    printf("p = %d\tq = %d\n",p,q);


    return 0;
}