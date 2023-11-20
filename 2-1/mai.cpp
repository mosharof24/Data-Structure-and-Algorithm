#include <iostream>
using namespace std;
struct Distance
{
    float feet;
    float inch;
};
Distance sum(Distance *D1,Distance *D2)
    {
    Distance D3;
    D3.inch=D1->inch+D2->inch;
    D3.feet=0;
    if(D3.inch>=12)
    {
        D3.feet=D3.feet+1;
        D3.inch=D3.inch-12;
    }
    D3.feet=D3.feet+D2->feet+D1->feet;
    return D3;
}

void Display(Distance *dd)
    {
        cout<<"The Measurement = "<<dd->feet<<" ft  "<<dd->inch<<" in "<<endl;
}

void Enter(Distance *dd)
    {
        cout<<"Enter the value of feet ";
        cin>>dd->feet;
        cout<<"Enter the value of inch ";
        cin>>dd->inch;
}


int main()
{
    Distance d1,d2,d3;
    Enter(&d1);
    Display(&d1);
    Enter(&d2);
    Display(&d2);
    d3=sum(&d1,&d2);
    Display(&d3);

    return 0;
}
