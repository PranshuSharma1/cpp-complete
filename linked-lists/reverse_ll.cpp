#include<iostream>

using namespace std;


class node{

    public:
        int data;
        node* ptr;

        node(int value){
            data=value;
            ptr=NULL;
        }
};

void insertAtTail(node* &head, int value){
    node* n = new node(value);
    node* temp=head;
    if(head==NULL){
        head=n;
        // cout<<"head is null "<<endl;   // this is just for debugging
        return;
    }

    // node* temp=head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;
    }
    // cout<<" the temp is movibg fwd "<<endl; // this is just for debugging
    temp->ptr=n;
    return;
}

void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" --> ";
        temp=temp->ptr;
    }
    cout<<endl;
}


node * reverse(node* &head){
    node* previous=NULL; 
    node* current=head; 
    node* next;
    // node* next=current->ptr;

    if(head==NULL){
        cout<<"the linked is empty "<<endl;
        return 0;
    }

    while(current!=NULL){
        next=current->ptr;

        current->ptr=previous;

        previous=current;
        current=next;
        // next=next->ptr;
    }

    head=previous;
    return head; 
}


int main(){

    node* head=NULL;

    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    node* newHead=reverse(head);
    display(newHead);
    display(head);
    return 0;
}