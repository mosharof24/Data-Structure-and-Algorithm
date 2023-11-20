#include<iostream>

using namespace std;

int main(){
    int *p,n;
    
    cout << "Enter the size of dynamic array" << endl;
    cin >> n;

    p = (int*) calloc(n, sizeof(int));

    cout << "Enter the value of " << n << " integer" << endl;

    // calloc implicitly initialize the allocated memory with zero

   /* for(int i=0;i<n;i++){
        cin >> *(p+i);                     // we could use p[i] instead of *(p+i)
    }*/

    cout << "Showing output" << endl;
    for(int i=0;i<n;i++){
        cout << *(p+i) << endl;
    }

    return 0;
}