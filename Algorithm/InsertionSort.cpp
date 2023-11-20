#include<iostream>
using namespace std;

void insertion_sort(int n, int *arr){
    int temp, index;

    for(int i=1; i<n; i++){
        int hole = i;
        temp = arr[i];
        while(hole>0 && arr[hole-1]>temp){
            arr[hole] = arr[hole-1];
            arr[hole-1] = temp;
            hole--;
        }
    }
}

int main(){
    int n;
    cout << "How many element(s)?" << endl;
    cin >> n;

    int *arr = new int(n);

    for(int i=0; i<n; i++){
        cout << "enter " << i+1 << "th element:";
        cin >> arr[i];
    }

    insertion_sort(n, arr);

    cout << "sorted Array is:" << endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << ' ';
    }

    return 0;
}