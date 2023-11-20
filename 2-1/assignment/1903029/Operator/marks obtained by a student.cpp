/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.*/
#include<iostream>
using namespace std;
int main()
{

    float marks1,marks2,marks3,marks4,marks5,agg,percentage;
    cout<<"Enter the marks of the student in 5 subject"<<endl;
    cin>>marks1>>marks2>>marks3>>marks4>>marks5;
    agg=marks1+marks2+marks3+marks4+marks5;
    percentage=agg/5;
    cout<<"the aggregate marks  of the student is "<<agg<<endl;
    cout<<"the percentage of marks of the student is "<<percentage<<endl;
}
