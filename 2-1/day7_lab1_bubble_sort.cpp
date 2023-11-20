#include<iostream>
using namespace std;

void bubble_sort(int* arr, int n){
    int temp;
    for(int i=0; i<=n-2; i++){
        for(int j=0; j<=n-2-i; j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    
    cout << "How many entries:";
    cin >> n;
    
    int arr[n];
    
    for(int i=0; i<=n-1; i++){
        cout << "Entry no. " << i+1 << " : ";
        cin >> arr[i];
    }
    
    bubble_sort(arr, n);

    cout << "Array sorted :" << endl;    
    for(int i=0; i<=n-1; i++){
        cout << arr[i] << ' ';
    }

    cout << endl;

    return 0;
}