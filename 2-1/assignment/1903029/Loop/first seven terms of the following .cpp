/*Write a program to add first seven terms of the following
series using a for loop:
1
1!
2
2!
3
3! ……*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=1,i;
    double sum=0,fact;
    while(num<=7)
    {
        fact=1;
       for(i=1;i<=num;i++)
    {

        fact=fact*i;
    }
    sum=(sum+(num/fact));
    num++;
    }

    cout<<sum;
}
