#include<iostream>
using namespace std;

class enode{
    private:
        float V, I, R;
    public:
        enode(){
            V = 0;
            I = 0;
            R = 100;
        }
        enode(float v, float i, float r){
            V = v;
            I = i;
            R = r;
        }
        void show_v_I_R(){
            printf("V = %f\tI = %f\tR = %f\n",V, I, R);
        }     
};

int main(){
    
    enode a = enode(10,10,109);
    a.show_v_I_R();

    return 0;
}