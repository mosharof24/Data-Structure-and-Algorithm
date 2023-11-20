/*Write a program to print all prime numbers from 1 to 300.
(Hint: Use nested loops, break and continue)*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, i, prime, maxx = 300;

    for(n=1; n<=maxx; n++){
        
        if(n==1)
        {
            cout<<" number 1 is not a prime"<<endl;
            continue;
        }
        
        prime = 1;
        
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
            {
               prime=0;
               break;
            }
        }
        if(prime)
        {
            cout<<n<<endl;
        }


    }
}



