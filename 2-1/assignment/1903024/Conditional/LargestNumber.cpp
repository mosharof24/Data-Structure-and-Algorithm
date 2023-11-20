/*Write a program to find the greatest of the three numbers entered through the keyboard using conditional operators*/
#include<iostream>
using namespace std;
int main()
{
    double a,b,c;
    
    cout << "Enter three number"<<endl;
    cin >> a >> b >> c;
    
    if(a>b && a>c)
    {
        cout << a << " is the largest number" << endl;
    }
    if(b>a && b>c)
    {
        cout << b << " is the largest number" << endl;

    }
    if(c>b && c>a)
    {
        cout << c << " is the largest number" << endl;
    }

    return 0;

}
