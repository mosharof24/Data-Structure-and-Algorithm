#include<iostream>
using namespace std;

class stack{
    int *arr, top, size;

    public:
        stack(int n){
            arr = (int*)malloc(n*sizeof(int));
            top = -1;
            size = n;
        }

        void push(int a){
            if(top == size-1){
                cout << "stack overflow" << endl;
                return;
            }

            top++;
            arr[top] = a;
        }

        int pop(){
            if(top == -1){
                cout << "stack underflow" << endl;
                return -1;                          //though stack is empty this will return -1; this can be resolved by exception handling
            }

            return arr[top--];
        }

        void get_stack(){
            for(int i =0; i<=top; i++){
                cout << arr[i] << endl;
            }
        }
};

int main(){
    stack stack1(10);
    
    stack1.pop();
    
    stack1.push(12);
    stack1.push(13);
    stack1.push(16);
    
    cout << stack1.pop() << " " << stack1.pop() << endl;

    stack1.get_stack();

    return 0;
}