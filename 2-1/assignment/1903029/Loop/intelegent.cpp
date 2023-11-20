#include<iostream>
using namespace std;
int main()
{
    int y,countt=1;
    float x,i;
    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x+=.5)
            {i=2+(y+.5*x);
        cout<<countt++<<"."<<"i is "<<i<<","<<" when x is "<<x<<","<<"y is "<<y<<endl;}
    }
}
