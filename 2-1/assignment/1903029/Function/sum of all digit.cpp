
#include<iostream>
using namespace std;
    int sumofdigit(int n)
    {

int sum=0;
    while(n!=0)
    {
        int r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<sum<<endl;
    return sum;

}
int main()
{
    sumofdigit(45145);
    sumofdigit(45745);
}
