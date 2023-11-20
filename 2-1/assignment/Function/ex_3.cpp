#include<iostream>
using namespace std;
int bin(int num);
int main()
{
    int num;
    cout<<"Enter Number: ";cin>>num;

    cout<<"\nDecimal To Binary : "<< bin(num);
}
int bin(int num)
{
    int x, res=0, pos=1;
    while (num!=0)
    {
        x = num%2;
        res = res + (x*pos);
        pos = 10*pos;
        num = num/2;
    }
    return res;
}