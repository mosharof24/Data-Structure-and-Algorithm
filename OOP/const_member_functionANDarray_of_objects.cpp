#include<iostream>
using namespace std;

class dist{
    public:
        int feet;
        float inches;

        void get_dist(){
            cout << "enter feet "; cin >> feet;
            cout << "enter inches "; cin >> inches;
        }
        void show_dist() const {            //A const member function guarantees that it will never modify any of its class’s member data.
            cout << feet << endl;
            cout << inches << endl;
        }
};

int main(){
    dist distance[20];
    char c;
    int n = 0;
    do
    {   
        cout << "enter distance number " << n << endl;
        distance[n].get_dist();
        distance[n].show_dist();
        cout << "do you want to give another input y/n ?"; cin >> c;
        n++;
    } while(c!='n' && n <= 19);

    return 0;
    
}