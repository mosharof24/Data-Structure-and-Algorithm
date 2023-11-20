#include<iostream>
using namespace std;

//template function with one type
template <typename a>
a getMax(a x, a y){
    return x>y ? x:y;
}

//template function with more than one type
template <class a, class b>
a getMin(a x, b y){
    return x<y ? x:y;
}


int main(){
    
    cout << getMax <int> (2, 1) << endl;
    cout << getMin <int, float> (40, 34.567) << endl;

    return 0;
}