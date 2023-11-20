#include<iostream>
#include<math.h>

using namespace std;

int compare(int a, int b){
    if (a<b) return -1;
    else return 1;
}

int absolute_compare(int a, int b){
    if (abs(a)>abs(b)) return 1;
    else return -1;
}

void bubbleSort(int *a, int n, int (*flag)(int, int)){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(flag(a[j], a[j+1]) > 0){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){

    int a[] = {1,23,543,-12,12,-9,23,12}, n;
    
    n = sizeof(a)/sizeof(int);

    bubbleSort(a, n, compare);
    for(int i=0;i<n;i++) cout << a[i] << endl;

    printf("\n");

    bubbleSort(a, n, absolute_compare);
    for(int i=0;i<n;i++) cout << a[i] << endl;

    return 0;
}