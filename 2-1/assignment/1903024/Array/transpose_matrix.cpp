/*A program to obtain transpose of a 4 mat 4 matrix. The
transpose of a matrix is obtained by exchanging the elements
of each row with the elements of the corresponding column.*/
#include<iostream>
using namespace std;
int main()
{

    int n=4, i, j;
    int mat[n][n];
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout << "Enter the value of row " << i << " column " << j << endl;
            cin >> mat[i][j];
        }
    }
    cout << "The matrix is " << endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {

            cout << mat[i][j] << "   ";
            if(j==n)
            {
                cout << "" << endl;
            }

        }

    }

    cout << "The transpose matrix is " << endl;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout << mat[j][i] << " ";
            if(j==n)
            {
                cout << " " << endl;
            }

        }
    }
}

