#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

void insert_n(int n, int val){
    node* temp = head;
    for(int i=0; i<n; i++){
        if(i==n-1){
            
            node* temp1 = new node;
            temp1->data = val;
            temp1->next = temp->next;
            temp->next = temp1;

            break;
        }
        temp = temp->next;
    }
}

void print(){
    node *temp;
    temp = head;
    cout << "List is: ";
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

node* head = NULL;

int main(){
    insert_n(1,12);
}