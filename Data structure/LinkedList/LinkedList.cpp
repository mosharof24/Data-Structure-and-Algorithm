#include<iostream>
using namespace std;

class LinkedList{
    int length = 0 , data;
    LinkedList *next, *head = NULL;

    public:
        void insert_at_begining(int Data){
            LinkedList *temp = (LinkedList*)malloc(sizeof(LinkedList));
            temp->data = Data;
            temp->next = head;
            head = temp;
            length++;
        }

        void insert_at_nth_pos(int Data, int n){
            if(n>length+1){
                cout << "invalid position" << endl;
            }
            else if(n == 1){
                insert_at_begining(Data);
            }
            else if(n == length+1){
                insert_at_last(Data);
            }
            else{
                LinkedList *temp1 = head;
                for(int i=1; i<n-1; i++){
                    temp1 = temp1->next;
                }
                LinkedList *temp = (LinkedList*)malloc(sizeof(LinkedList));
                temp->data = Data;
                temp->next = temp1->next;
                temp1->next = temp;
                length++;
            }
        }

        void insert_at_last(int Data){
            LinkedList *temp1 = head;
            for(int i=1; i<length; i++){
                temp1 = temp1->next;
            }
            LinkedList *temp = (LinkedList*)malloc(sizeof(LinkedList));
            temp->data = Data;
            temp1->next = temp;
            temp->next = NULL;
            length++;
        }

        void print(){
            LinkedList *temp;
            temp = head;
            cout << "List is: ";
            while(temp!=NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }

            cout << endl;

        }
};

int main(){
    LinkedList l1;
    l1.insert_at_begining(12);
    l1.print();
    l1.insert_at_begining(13);
    l1.print();
    l1.insert_at_nth_pos(16, 2);
    l1.print();
    l1.insert_at_last(89);
    l1.print();
    l1.insert_at_nth_pos(56,1);
    l1.print();
    l1.insert_at_nth_pos(15,6);
    l1.print();

    return 0;
}