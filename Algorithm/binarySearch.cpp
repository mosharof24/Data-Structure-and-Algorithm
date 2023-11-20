#include<iostream>
using namespace std;

void BubbleSort(float *arr, int n){
    float temp;

    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int binarySearch(float *arr, float item, int n){
    for(int i=0; i<=n; i++){
        if(arr[i]==item){
            return i;
        }
    }
    return -1;
}

int main(){
    float arr[] = {1.2, 23, 34.9, 40.9,56, 90, 87.7}, item;
    int n = sizeof(arr)/sizeof(float);
    cout << "Enter the item which index is wanted:" << endl;
    cin >> item;

    //sorting arr using function BubbleSort
    BubbleSort(arr, n);
    
    int LOC = binarySearch(arr, item, n);

    if(LOC != -1){
        cout << "index of the item is " << LOC << endl;
    }
    else{
        cout << "The item is not in arr" << endl;
    }

    return 0;

}