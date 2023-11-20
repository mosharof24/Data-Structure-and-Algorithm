#include<iostream>
using namespace std;
    int sumofdigit(int n)

    {


    if(n!=0)
    {


    return(n%10+sumofdigit(n/10));

     }



}
int main()
{  int x;
   x=sumofdigit(1245);
    cout<<"summation is "<<x<<endl;

}
