/*The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double length,breadth,radius,area_rec,area_cir,perimeter_rec,circumference_cir;
    cout<<"Enter the length of the rectangle"<<endl;
    cin>>length;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>breadth;
    cout<<"Enter the radius of the circle"<<endl;
    cin>>radius;
    area_rec=length*breadth;
    perimeter_rec=2*length*breadth;
    area_cir=3.1416*radius*radius;
    circumference_cir=2*3.1416*radius;
    cout<<"area of the rectangle  is "<<area_rec<<endl;
    cout<<"perimeter of the rectangle is "<<perimeter_rec<<endl;
    cout<<"area of the circle is "<<area_cir<<endl;
    cout<<"circumference of the circle is "<<circumference_cir<<endl;
}
