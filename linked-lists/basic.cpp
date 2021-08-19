#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* ptr;

        node(int value){
            data = value;
            ptr = NULL;
        }

};

void insertValueAtTail(node* &head,int value){
    node* n= new node(value); 
    // only because of the below exception we have called head with , call by refrence as we are changing the head, if the linked list is empty
    if(head == NULL){
        head=n;
        // head->ptr = NULL;
        return;
    }

    // node* temp = head;
    node* temp=head;
    while(temp->ptr != NULL){
        cout<<"updating the value";
        temp = temp->ptr;
    } 
    temp->ptr=n;

    n->ptr=NULL;
    // return;
}

void displayLinkedList(node* head){
    node* temp=head;
    if(temp->ptr == NULL   ){
        cout<<temp->data<<" - "<<temp->ptr<<" --> ";
    }

    while(temp->ptr != NULL){
        cout<<temp->data<<" - "<<temp->ptr<<" --> ";
        temp=temp->ptr;
    }
}



int main(){
    node* head=NULL;
    insertValueAtTail(head, 2);
    // insertValueAtTail(head, 3);

    insertValueAtTail(head,3);
    // insertValueAtTail(head, 4);
    // insertValueAtTail(head, 5);

    displayLinkedList(head);

    return 0;
}