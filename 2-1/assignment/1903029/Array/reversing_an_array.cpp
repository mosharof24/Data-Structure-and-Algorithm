/*copying the context of one array into another in reverse order*/

#include<iostream>

using namespace std;

int main()
{
    int arr1[5],arr2[5],i,j;

    cout << "enter 5 number" << endl;
    
    for(i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    
    for(i=4,j=0; i<5,j<5; i--,j++)
    {
        arr2[j] = arr1[i];

    }
    cout<<"The reverse order of the entered array is "<<endl;
    
    for(j=0; j<5; j++)
    {
        cout << arr2[j] << endl;
    }

    return 0;

}
