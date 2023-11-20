//A friend of a class is declared outside the class scope but it has the right to
//access all the public protected and private members of the class
#include<iostream>
using namespace std;

class Box{

    int width;
    
    public:
    int length;

    Box(int a, int b){
        width = a;
        length = b;
    }

    friend void getBoxInfo(Box);
};

void getBoxInfo(Box box){
    cout << box.width << " " << box.length << endl;
}

int main(){
    Box box1(12,45.6);
    getBoxInfo(box1);

    return 0;
}