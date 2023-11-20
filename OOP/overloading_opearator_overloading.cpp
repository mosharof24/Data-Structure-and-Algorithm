#include<iostream>
using namespace std;

class counter{
    public:
    int count;

    counter(){
        count = 0;
    }

    counter operator ++(){
        return counter(count++);              //opearator overloading and returning a unnamed object of class counter
    }

    counter operator ++(int){
        return counter(++count);              //overloading operator overloading and returnng an unnamed object. here argument int is given only for overloading purpose
    }
};

int main(){
    counter c1, c2, c3, c4;

    c3 = c1 ++;
    c4 = ++ c2;

    cout << "c1 = " << c1.count << " c2 = " << c2.count << endl;
    cout << "c3 = " << c3.count << " c4 = " << c4.count << endl; 

    return 0;
}