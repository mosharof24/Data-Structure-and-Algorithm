#include<iostream>

using namespace std;

void print(char *c){
    while(*c!='\0'){
        cout << *c;
        c++;
    }
    cout << "\n";
}

int main(){
    char *c = "Hello";
    print(c);

    char *a = c;
    cout << a << endl;
    printf("a = %d, c = %d\n",a,&c[0]);

    return 0;
}