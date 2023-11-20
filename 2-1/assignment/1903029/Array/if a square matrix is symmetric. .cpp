/*(k) Write a program to find if a square matrix is symmetric.
*/
#include<iostream>
using namespace std;
int main()
{

    int n,i,j,c=0;
    cout<<"enter the oder of the square matrix"<<endl;
    cin>>n;

    int x[n][n];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"Enter the value of row "<<i<<" column "<<j<<endl;
            cin>>x[i][j];
        }
    }
    cout<<"The matrix is "<<endl;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {

            cout<<x[i][j]<<"   ";
            if(j==n)
            {

                cout<<""<<endl;

            }

        }

    }

    cout<<"The transpose matrix is "<<endl;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<x[j][i]<<" ";
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
            if(x[i][j]!=x[j][i])
            {
                c=1;
                break;
            }
        }
    }

if(c==0)
{
    cout<<"entered matrix is symmetrical matrix"<<endl;

}
else
    {
    cout<<"entered matrix is not a symmetrical matrix"<<endl;
}
}
