/* Create a structure to specify data on students given below:
Roll number, Name, Department, Course, Year of joining
Assume that there are not more than 450 students in the
collage.
(a) Write a function to print names of all students who joined
in a particular year.*/
#include<iostream>
using namespace std;
struct stduent
{
    int roll;
    char name[30];
    char dept[30];
    char cource[30];
    int year;
}s[10];
int main()
{

   int i;
   cout<<"Enter the information of the students\n"<<endl;
   for(i=0;i<450;i++)

    {
   s[i].roll=i+1903001;
   cout<<"\nFor the roll number "<<s[i].roll<<endl;
   cout<<"Enter the name "<<endl;
   cin>>s[i].name;
   cout<<"Enter department "<<endl;
   cin>>s[i].dept;
   cout<<"Enter course without course number "<<endl;
   cin>>s[i].cource;
   cout<<"Enter of year of joining "<<endl;
   cin>>s[i].year;
   }
   cout<<"     "<<endl;
   cout<<"displaying information of the students ....."<<endl;
   for(i=0;i<450;i++)

    {
        cout<<"roll number "<<i+1<<endl;
        cout<<"name is "<<s[i].name<<endl;
        cout<<"department "<<s[i].dept<<endl;
        cout<<"course "<<s[i].cource<<endl;
        cout<<"year "<<s[i].year<<endl;
        cout<<"    "<<endl;




}
}

