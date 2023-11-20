#include<iostream>
using namespace std;

class counter{
    public:
    
    int count;
    
    counter(){
        count = 0;
    }

    void operator ++(){
        ++ count;            //operator overloaded
    }

};

int main(){
    counter c1, c2;

    ++ c2;

    cout << c1.count << endl;
    cout << c2.count << endl;

    return 0;

}