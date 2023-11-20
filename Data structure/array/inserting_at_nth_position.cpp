#include<iostream>
using namespace std;

int main(){
    int *arr, n, pos, *arr_new, item;
    
    cout << "Enter the size of array: ";
    cin >> n;

    arr = (int*)malloc(n*sizeof(int));

    cout << "Assign value to the array:" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    cout << "Enter the position and the value to be inserted: ";
    cin >> pos >> item;

    arr_new = (int*)malloc((n+1)*sizeof(int));
    
    for(int i=0; i<n+1; i++){
        if(i<pos){
            arr_new[i] = arr[i];
            continue;
        }
        else if(i==pos){
            arr_new[i] = item;
        }
        else{
        arr_new[i] = arr[i-1];
        }
    }

    free(arr);

    cout << "new array:" << endl;
    for(int i=0; i<n+1; i++){
        cout << arr_new[i] << endl;
    }

    return 0;
}