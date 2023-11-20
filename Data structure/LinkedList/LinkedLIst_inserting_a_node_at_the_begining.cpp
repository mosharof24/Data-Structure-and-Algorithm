#include<iostream>

using namespace std;

struct node{
    int data;
    node* next;
};

node* head = NULL;

void insert(int x){
    node* temp = new node;
    temp->data = x;
    temp->next = head;
    head = temp;
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

int main(){
    int n,x;
    cout << "How many entries?" << endl;
    cin >> n;
    for(int i=0;i<n;i++){
        cout << "enter data: ";
        cin >> x;
        insert(x);
        print();
    }

    return 0;
}