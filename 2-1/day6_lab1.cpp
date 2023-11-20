/*Function overloading*/

#include<iostream>
#include<math.h>
using namespace std;

float multifly(float v, float i){
    return v*i;
}

float multifly(float v, float i, float theta){
    return v*i*cos(theta*M_PI/180),v;
}

int main(){
    float v,i,theta;
    cout << "Enter the value of V and I for DC power:";
    cin >> v >> i;
    float dc_p = multifly(v,i);

    cout << "Enter the value of V, I and theta for DC power:";
    cin >> v >> i >> theta;
    float ac_p = multifly(v,i,theta);

    cout << " DC power = " << dc_p << " AC power = " << ac_p << endl;

    return 0;
}