/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float c,f,x,y;
    cout<<"enter the temperature in farenhite"<<endl;
    cin>>f;
    x=.5555555;
    y=(f-32);
    c=x*y;
    cout<<"temperature in celcius is "<<c<<endl;
}

