/*Write a function to print names of all students who joined
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
}s[121];
void year_based(int y);
int main()
{

   int i,c;
   cout<<"Enter the information of the students\n"<<endl;
   for(i=0;i<3;i++)

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

   cout<<"displaying information of the students ....."<<endl;
   for(i=0;i<3;i++)

    {
        cout<<"roll number "<<i+1<<endl;
        cout<<"name is "<<s[i].name<<endl;
        cout<<"department "<<s[i].dept<<endl;
        cout<<"course "<<s[i].cource<<endl;
        cout<<"year "<<s[i].year<<endl;
        cout<<"    "<<endl;
}

    year_based(2019);

}

void year_based(int  y)
{
    int i,j=0;
    for (i=0;i<3;i++)
    {
        if (y==s[i].year)
        {
            cout<<"roll of "<<i+1<<" joined in the year of "<<s[i].year<<endl;
             j=1;
        }

    }
    if (j==0)
    {
        cout<<"No one join in this year"<<endl;
    }
}
