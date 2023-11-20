#include<iostream>
using namespace std;

struct node{
    int val;
    node *link;
};

int main(){
    int value;
    char c;
    node *head;
    node *temp =  new node;                                  //(node*)malloc(sizeof(node));
    head = temp;

    while(true){
        cout << "enter a value: ";
        cin >> temp->val;

        cout << "do you want to add another node? y/n: ";
        cin >> c;

        if(c != 'n'){
            node *temp1 = new node;
            temp->link = temp1;
            temp = temp1;
        }
        else{
            temp->link = NULL;
            break;
        }
    }

    cout << "the linked list is: " ;

    temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->link;
    }

    return 0;

}