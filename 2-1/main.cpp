#include <iostream>
using namespace std;
class distance
{
private:
    int feet;
    float inch;
public:
    distance():feet(0),inch(0){}
   distance(int ft,float in)
   {
       feet=ft;
       inch=in;
   }
   void take_digit()
   {
       cout<<"Enter the value feet =  ";
       cin>>feet;
       cout<<"Enter the value inch =  ";
       cin>>inch;
   }
   void display()
   {
       cout<<"Feet =  "<<feet<<"inch =  "<<inch;

   }
   void add_distance(distance,distance);                  //prototype
};
        void distance::add_distance(distance d2,distance d3)
          {
              inch=d2.inch+d3.inch;
              feet=0;
              if(inch>=12)
              {
                  inch=inch-12;
                  feet++;
              }
              feet=feet+d2.feet+d3.feet;
          }
int main()
{
   struct distance dist1,dist3;
   struct distance dist2(11,6.25);
   dist1.take_digit();
   dist3.add_distance(dist1,dist3);

   cout<<" \nd1 ";
   dist1.display();
   cout<<" \nd2 ";
   dist2.display();
   cout<<" \nd3 ";
   dist3.display();
    return 0;
}
