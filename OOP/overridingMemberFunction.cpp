//Objects of Stack2 behave in exactly the same way as those of Stack, except that you will be warned if
//you attempt to push too many items on the stack or if you try to pop an item from an empty stack.

#include<iostream>
using namespace std;

class stack{
    protected:
    int stkarray[5], top, max=5;

    public:
    stack(){
        top = -1;
    }

    void push(int var){
        stkarray[++top] = var;
    }

    int pop(){
        return stkarray[top--];
    }
};

class stack2 : public stack{
    public:
    void push(int var){
        if(top >= max-1){
            cout << "Stack overflow" << endl; 
            exit(1);
        }
        stkarray[++top] = var;
    }

    int pop(){
        if(top == -1){
            cout << "stack underflow" << endl;
            exit(1);
        }
        return stkarray[top--];
    }
};

int main(){
    stack2 s;
    s.push(12);
    s.push(34);
    s.push(45);
    s.push(89);
    s.push(76);
    //s.push(4534);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    return 0;
}