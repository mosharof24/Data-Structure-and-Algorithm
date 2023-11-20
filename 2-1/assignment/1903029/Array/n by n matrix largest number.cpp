#include<iostream>
using namespace std;
int main()
{

    int n=5,i,j;
    cout<<"Enter the number by which you want to make the n*n matrix"<<endl;
    cin>>n;
    int x[n][n],maxx=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"Enter the value of row "<<i<<" column "<<j<<endl;
            cin>>x[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<x[i][j]<<"  ";
            if(j==n)
            {
                cout<<""<<endl;
            }

        }

    }
     for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

            if(maxx<x[i][j])
            maxx=x[i][j];
        }
        }
        cout<<"largest number is  "<<maxx;


}




