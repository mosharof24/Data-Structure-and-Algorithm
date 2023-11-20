#include <iostream>
using namespace std;
struct Distance
{
    int feet;
    float inch;
    public:

    Distance sum( Distance D2)
    {
       Distance D3;
       D3.inch=inch+D2.inch;
       D3.feet=0;
       if(D3.inch>=12)
       {
           D3.feet=D3.feet+1;
           D3.inch=D3.inch-12;
       }
       D3.feet=feet+D3.feet+D2.feet;
       return D3;
    }
    void Display()
    {
        cout<<"The Measurement = "<<feet<<" ft  "<<inch<<" in ";
    }
   void Enter()
    {
        cout<<"Enter the value of feet ";
        cin>>feet;
        cout<<"Enter the value of inch ";
        cin>>inch;
    }
};

int main()
{
    Distance d1,d2,d3;
    d1.Enter();
    d1.Display();
    d1.Enter();
    d1.Display();
    d3=d1.sum(d2);
    d3.Display();

    return 0;
}
