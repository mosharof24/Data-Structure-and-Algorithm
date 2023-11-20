#include<iostream>

using namespace std;

int main(){
    int A[2][3];
    A[0][0] = 123;
    A[1][0] = 121;

    //cout << A << '\n' << &A << '\n' << A[0] << '\n' << &A[0] << '\n' << &A[0][0] << '\n' << A+1 << '\n' << endl;
    
    printf("A = %d\n&A = %d\nA[0] = %d\n&A[0] = %d\n*A = %d\n&A[0][0] = %d\n&A[0][0]+1 = %d\n*A[0] = %d\n",A,&A,A[0],&A[0],*A,&A[0][0],&A[0][0]+1,*A[0]);
    printf("*A = %d\n*A+1 = %d\n*A[1] = %d\nA[1] = %d\nA+1 = %d\n&A[0]+1 = %d\n",*A,*A+1,*A[1],A[1],A+1,&A[0]+1);
    printf("A[0]+1 = %d\n",A[0]+1);
    printf("**A = %d\n",**A);
    return 0;
}