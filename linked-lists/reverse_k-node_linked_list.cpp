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
    node* n=new node(value);
    // cout<<"the value entered is "<<value<<endl;
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;

    }
    temp->ptr=n;

}


void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" | "<<temp->ptr<<" --> ";
        temp=temp->ptr;
    }
    cout<<endl;
}

node* reverseK_node(node* &head, int k){
    node* previous =NULL;
    node* current =head;
    node* next;
    int count=0;
    while(count<k && current!=NULL){
        next=current->ptr;
        // next->ptr=current;
        current->ptr=previous;
        previous=current;
        current=next;
        count++;
    }
    if(next!=NULL){
        head->ptr = reverseK_node(next,k);
    }
    
    return previous;
}


int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    display(head);

    node* new_head=reverseK_node(head,2);
    // cout<<"test";
    display(new_head);
    display(head);
    return 0;
}