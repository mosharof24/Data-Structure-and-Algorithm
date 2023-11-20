#include<iostream>
using namespace std;
void year(int n);
int main()
{
year(1612);
}

void year(int n)
{
    int j=0;
    if((n%100==0&&n%400==0)||(n%4==0&&n%100!=0))
    {
        cout<<"This is a leap year"<<endl;
        j++;
    }

    else
    {
         cout<<"This is a not leap year"<<endl;
    }


}
