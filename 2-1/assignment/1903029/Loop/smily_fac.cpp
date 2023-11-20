/*Write a program to fill the entire screen with a smiling face.
The smiling face has an ASCII value 1. */
#include<iostream>
using namespace std;
int main()
{
    char c=1;
    int i;
    for(i=1;i<10000;i++)
        cout<<c;
}
