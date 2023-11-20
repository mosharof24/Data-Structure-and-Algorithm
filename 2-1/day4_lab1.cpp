#include<iostream>
#include<math.h>

using namespace std;

struct acterminal{
    float volt,current,theta;
};

float power_calc(acterminal term1){
    return term1.current*term1.volt*cos(term1.theta*M_PI/180);
}

int main(){
    acterminal term1;
    cout << "Enter value of volt,current,theta" << endl;
    cin >> term1.volt >> term1.current >> term1.theta;

    printf("Voltage = %.2f Current = %.2f Theta = %.2f\n",term1.volt,term1.current,term1.theta);

    float power = power_calc(term1);
    cout << "Power = " << power << endl;
    
    return 0;
}