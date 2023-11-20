/*Write a program to pick up the largest number from any 5 row
by 5 column matrix*/


#include<iostream>
using namespace std;
int main(){

    int order = 5, i, j;
    int mat[order][order], max = 0;
    
    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {
            printf("Enter the value of row %d column %d\n", i, j);
            cin >> mat[i][j];
        }
    }
    
    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {
            cout << mat[i][j] << "  ";
            if(j==order)
            {
                cout<<""<<endl;
            }

        }

    }
    
    for(i=1; i<=order; i++)
    {
        for(j=1; j<=order; j++)
        {

            if(max<mat[i][j])
            max = mat[i][j];
        }
        }
        cout << "largest number is  "<< max << endl;

    return 0;

}