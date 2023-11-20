#include<iostream>
using namespace std;
void binary(int n);
int main()
{
binary(10);
}
void binary(int n)
{
    int i=0,j,x[32],y[32];
    while(n>0)
    {
        x[i]=n%2;
        n=n/2;
        i++;
    }

    for(j=i-1;j>=0;j--)
    {
         cout<<x[j];
    }

}
