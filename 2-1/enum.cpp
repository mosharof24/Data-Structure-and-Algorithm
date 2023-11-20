#include<iostream>
using namespace std;
int main(){
    
    enum an{sz,a,b,c};
    cout << sz << endl;

    cout << sizeof(double) << endl;

    int rr[4];
    int i = 0;
    rr[i] = i++;
    rr[i] = ++i;

    cout << rr[0] << " " << rr[2] << endl;


    an p;
    p = b;   
    return 0;
}