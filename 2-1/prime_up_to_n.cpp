#include<iostream>

using namespace std;

int main(){
    int n,j,i;

    cout<< "Enter the number:" << endl;
    cin >> n;

    for(j=2; j<=n; j++){
        for(i=2;i<=j/2;i++){
            if(j%i==0){
                break;
            }
        }
        if(i>=(j/2+1)){
            cout << j << " ";
        }
    }

    return 0;
}