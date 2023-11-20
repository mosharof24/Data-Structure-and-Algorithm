#include<iostream>
using namespace std;

class resistor{
    float resistance_val, volt, power;
    public:
    void disp_power(){
        power = (volt*volt)/resistance_val;
    }

    float get_res_val(){
        return resistance_val; 
    }
    float get_volt(){
        return volt;
    }
    void set_parent(float v, float r){
        volt = v; resistance_val = r;
    }
};

class resistance_current : public resistor{
    public:
    void current(){
        float v = this->get_volt();
        float r = this->get_res_val();
        float i = v/r;
        cout << "current = " << i << endl;
    }
};

int main(){
    resistance_current R1;
    R1.set_parent(23.4, 10);
    R1.current();

    return 0;
}