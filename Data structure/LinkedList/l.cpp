#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    node* head = NULL;
    node* temp = new node;
    head = temp;
    int data;
    cout << "data for node 1:";
    cin >> data;
    head->data = data;
    for(int i=0; i<6; i++){
        node* temp1 = new node;
        cout << "data for" << " node " << i+2 << ":";
        cin >> data;
        temp1->data = data;
        temp->next = temp1;
        temp = temp1;
    }
    temp->next = NULL;

    temp = head;

    while(1){
        if(temp->next == NULL){
            cout << temp->data << endl;
            break;
        }
        cout << temp->data << ',';
        temp = temp->next;
    }

    return 0;
}