#include<iostream>
#include<math.h>

using namespace std;

void print(int a){
    for(int i=1; i<1; i++){
        if(i!=1){
            cout << ',';
        }
        cout << i;
    }
    cout << endl;
}

int main(){
    int n;
    cout << "How many digit do you want to print:"; cin >> n;
    print(n);
    return 0;
}