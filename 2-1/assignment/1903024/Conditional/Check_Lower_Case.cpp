/*Using conditional operators determine:
Whether the character entered through the keyboard is a
lower case alphabet or not. */

#include<iostream>
using namespace std;
int main()
{
    char n;
    
    cout << "Enter a  character" << endl;
    cin >> n;
    
    if(n>=97 && n<=122)
    {
        cout << "Entered character is a lowercase alphabet" << endl;
    }
    else if(n>=65 && n<=90)
    {
        cout << "Entered character is a uppercase alphabet" << endl;
    }
    else{
        cout << "You did'nt entered any character" << endl;
    }

    return 0;

}
