/*Write a program to add two 6 x 6 matrices. */

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{

    int order = 2, i, j, c = 0;
    int x[order][order],y[order][order],sum[order][order];
    
    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {
            x[i][j] = rand()%1000;
        }
    }
    
    cout << "   " << endl;
    cout << "The first matrix is " << endl;

    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {

            cout << x[i][j] << "   ";
            if(j==order)
            {

                cout << "" << endl;

            }

        }

    }

    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {
            y[i][j] = rand()%1000;
        }
    }
    
     cout << "   " << endl;
    cout << "The second matrix is " << endl;

    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {

            cout << y[i][j] << "   ";
            if(j==order)
            {

                cout << "" << endl;

            }

        }

    }

    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {
            sum[i][j] = x[i][j] + y[i][j];
        }
    }
    
    cout << "   " << endl;
    cout << "The summed  matrix is " << endl;

    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {

            cout << sum[i][j] << "   ";
            if(j==order)
            {

                cout << "" << endl;

            }

        }

    }

return 0;

}