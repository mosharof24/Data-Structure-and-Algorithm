#include<iostream>
using namespace std;

void abc(char a='*', int n = 45){
    for (int i = 0; i < n; i++)
    {
        cout << a << ' ';
    }
    cout << endl;
}

int main(){

abc();
abc('1', 16);

return 0;
}