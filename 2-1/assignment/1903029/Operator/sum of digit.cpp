/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.*/

#include<iostream>
using namespace std;
int main()
{
    int x,sum=0,c;
    cout<<"enter 5 digit number"<<endl;
    cin>>x;
    while(x!=0)
    {
        c=x%10;
        x=x/10;
        sum=sum+c;

    }

    cout<<"summation of all digit is  "<<sum;
}
