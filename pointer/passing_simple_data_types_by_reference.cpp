#include<iostream>
using namespace std;

void intfrac(float n, float& intp, float& fracp)
{
long temp = static_cast<long>(n);
intp = static_cast<float>(temp);
fracp = n - intp;
}

void intfrac_pointer(float n, float* intp, float* fracp){
    long temp = (long)n;
    *intp = (float)temp;
    *fracp = n - *intp;
}

int main(){
    float n, intpart, fracpart;
    cin >> n;
    intfrac(n, intpart, fracpart);  //Though we have given argument as the variables name 
                                    //but it will take the variables address
    cout << intpart << " " << fracpart << endl;


    intfrac_pointer(n, &intpart, &fracpart);
    cout << intpart << " " << fracpart << endl;

    return 0;
}