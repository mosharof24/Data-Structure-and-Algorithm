#include<iostream>
using namespace std;

void selection_sort(int n, int* arr){
    int index, min, temp;

    for(int i=0; i<n-1; i++){
        
        min = arr[i];
        index = i;
        
        for(int j=i+1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                index = j;
            }
        }

        temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
    }
}

int main(){
    int n;
    cout << "How many elements?" << endl;
    cin >> n;

    int *arr = new int(n);

    for(int i=0; i<n; i++){
        cout << "enter " << i+1 << "th element:";
        cin >> arr[i];
    }

    selection_sort(n, arr);

    cout << "sorted Array is:" << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}