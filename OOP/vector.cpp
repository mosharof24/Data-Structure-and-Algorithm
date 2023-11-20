#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> V;

    srand(time(0));

    for(int i=0; i<10; i++){
        V.push_back(rand()%101);
    }

    //begin and end-----iterator
    for(auto i=V.begin(); i!=V.end(); i++){
        cout << *i << " ";
    }
    cout << endl;

    //rbegin and rend-----reverse iterator
    for(auto i=V.rbegin(); i!=V.rend(); i++){
        cout << *i << " ";
    }
    cout << endl;

    //cbegin and cend-----constant iterator-----we can access the value pointed by i but can't change them
    //doing *i = *i-10 or any change to *i will give error
    for(auto i=V.cbegin(); i!=V.cend(); i++){
        cout << *i << " ";
    }
    cout << endl;

    //crbegin and crend----constant iterator in reverse order, we can access the value pointed by i but can't change them
    //doing *i = 10 or any change to *i will give error
    for(auto i=V.crbegin(); i!=V.crend(); i++){
        cout << *i << " ";
    }
    cout << endl;

    //use of auto to print the elements of vector object
    for(auto i:V){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}