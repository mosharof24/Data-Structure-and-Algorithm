#include<iostream>
using namespace std;

class count{
    public:
    int coun;

    public:
    count(){
        coun = 0;
    }

    void operator ++ (){
        coun++;
    }
};

class derv1 : public count{
    public:
    int a;

    derv1(int b){
        a = b;
    }

    derv1 operator + (derv1 c){                               
        int p = a + c.a;

        return derv1(p);          //nameless temporary object
    }

    void operator -- (){
        coun--;
        a--;
    }

};

int main(){
    count c1;
    ++c1;
    ++c1;


// struct S {
//     S& operator++();    // pre-increment
//     S operator++(int);  // post-increment
// };

// S s;
// ++s; // calls S::operator++()
// s++; // calls S::operator++(int)


    derv1 c2(3), c3(4), c4(0), c5(7);
    c4 = c2 + c3;
    cout << c1.coun << " " << c4.coun << " " << c4.a << endl;

    c4 = c2 + c5;
    cout << c4.a << endl;
    
    --c4; --c4; --c4;
    cout << c4.a << " " << c4.coun << endl;
    return 0;
}
