/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters*/
#include<iostream>
using namespace std;
int main()
{
    double distance,m,cm,inc,feet;
    cout<<"The distance between two cities (in km.)"<<endl;
    cin>>distance;
    m=distance/1000;
    cm=m/100;
    inc=cm/2.54;
    feet=inc/12;
     cout<<"The distance between two cities (in meter  )is  "<<m<<endl;

      cout<<"The distance between two cities (in cm.) is "<<cm<<endl;

       cout<<"The distance between two cities (in inch) is "<<inc<<endl;

        cout<<"The distance between two cities (in feet)  is "<<feet<<endl;




}





