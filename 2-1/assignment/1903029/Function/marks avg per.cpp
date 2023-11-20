/*Write a function that receives marks received by a student in 3
subjects and returns the average and percentage of these
marks. Call this function from main( ) and print the results in
main( ).*/
#include<iostream>
#include<cmath>
#include<stdio.h>
using namespace std;
void stdnt(double marks1,double marks2,double marks3,double total_marks,double *avg,double *per);
int main()
{
   double marks1,marks2,marks3,avg,per,total_marks;
   cout<<"Enter the marks of the student in 3 subject serially marks1,marks2 and maks3 in respectives subjects"<<endl;
   cin>>marks1>>marks2>>marks3;
   cout<<"Enter the total marks of 3 subject on which exam was held"<<endl;
   cin>>total_marks;
   stdnt( );
   cout<<"Average of the total marks of the student is "<<avg<<endl;
   cout<<"Percentage of these marks is "<<per<<endl;
}
void stdnt(double marks1,double marks2,double marks3,double total_marks,double *avg,double *per);
{
  *avg=(marks1+marks2+marks3)/3;
  *per=  ((marks1+marks2+marks3)/total_marks)*100;

}
