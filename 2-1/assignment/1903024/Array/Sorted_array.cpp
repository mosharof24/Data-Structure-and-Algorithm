#include<iostream>
#include<time.h>

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

int main(){
    float *arr;
    int n;
    
    srand(time(NULL));
    
    cout << "Enter the size of arr" << endl;
    cin >> n;
    
    arr = (float*) malloc(sizeof(float)*n);
    
    for (int i=0;i<n;i++){
        arr[i] = rand()%101;
    }

    BubbleSort(arr, n);

    cout << "Printing the element of arr:" << endl;
    for (int i=0;i<n;i++){
        cout << arr[i] << endl;
    }

    free(arr);

    return 0;

}
