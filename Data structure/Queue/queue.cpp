#include<iostream>
using namespace std;

class queue{
    int *arr, front, rear, size;

    public:
        queue(int n){
            size = n;
            arr = (int*)malloc(n*sizeof(int));
            front = -1;
            rear = -1;
        }
        
        void enqueue(int n){
            if((rear+1)%size == front){
                cout << "Overflow" << endl;
            }
            else if(rear == -1){
                front = 0;
                rear = 0;
                arr[rear] = n;
            }
            else{
                rear = (rear+1)%size;
                arr[rear] = n;
            }
        }
        
        int dequeue(){
            if(front == -1){
                cout << "Underflow" << endl;
                return -1;
            }
            else if(front == rear){
                int temp = arr[front];
                front = rear = -1;
                return temp;
            }
            else{
                int temp = arr[front];
                front = (front+1)%size;
                return temp;
            }
        }

        void get_queue(){
            int get_front = front; 
            cout << "get_queue : " <<  endl;
            while(get_front != -1){
                if(get_front == rear){
                    cout << arr[get_front] << ' ';
                    get_front = -1;
                }
                else{
                    cout << arr[get_front] << ' ';
                    get_front = (get_front+1)%size;
                }
            }
            cout << endl;
        }
};

int main(){
    queue queue1(5);

    cout << queue1.dequeue() << endl;;
    queue1.enqueue(1);
    queue1.enqueue(2);
    cout << queue1.dequeue() << endl;
    queue1.get_queue();
    queue1.enqueue(3);
    queue1.enqueue(4);
    queue1.enqueue(5);
    queue1.enqueue(6);
    queue1.get_queue();
    queue1.enqueue(7);
    queue1.enqueue(8);
    queue1.get_queue();
    cout << queue1.dequeue() << endl;
    cout << queue1.dequeue() << endl;
    queue1.get_queue();
    queue1.enqueue(7);
    queue1.enqueue(8);
    queue1.get_queue();
    cout << queue1.dequeue() << endl;
    cout << queue1.dequeue() << endl;
    cout << queue1.dequeue() << endl;
    cout << queue1.dequeue() << endl;
    queue1.get_queue();
    cout << queue1.dequeue() << endl;
    cout << queue1.dequeue() << endl;
    queue1.get_queue();

    return 0;
}