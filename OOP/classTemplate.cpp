#include<iostream>
using namespace std;

template <class T>
class myNum{
    T val[2];

    public:
    myNum(T a, T b){
        val[0] = a;
        val[1] = b;
    }

    T getmax();
};

template <class T> T myNum <T> :: getmax(){
    return val[0] > val[1] ? val[0]:val[1];
}

int main(){
    myNum <int> n(12, 13);

    cout << n.getmax() << endl;

    return 0;
}