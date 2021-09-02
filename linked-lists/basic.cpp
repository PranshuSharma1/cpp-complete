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
        // cout<<"this is insertvalueat tail if head is null"<<" and the value is :- "<<value<<endl;
        head=n;
        // head->ptr = NULL;
        return;
    }
    // cout<<"this is insertvalueat tail if head is not null"<<" and the value is :- "<<value<<endl;
    // node* temp = head;
    node* temp=head;
    // cout<<"the ptr of temp is :- "<<temp->ptr<<endl;
    while(temp->ptr != NULL){
        // cout<<"updating the value"<<endl;
        temp = temp->ptr;
    } 
    temp->ptr=n;

    n->ptr=NULL;
    // return;
}

void displayLinkedList(node* head){
    node* temp=head;
    // if(temp->ptr == NULL   ){
    //     cout<<temp->data<<" -> "<<temp->ptr<<" ==> ";
    // }

    while(temp != NULL){
        cout<<temp->data<<" -> "<<temp->ptr<<" ==> ";
        temp=temp->ptr;
    }
    cout<<endl;
}

bool search(node* head, int value){
    node* temp=head;

    while(temp->ptr !=NULL){
        if (temp->data == value){
            return true;
        }
        temp=temp->ptr;
    }
    return false;
}


void insertAtHEAD (node* &head, int value){             // head is called by the refrence 
    node* n = new node(value);

    if(head==NULL){
        head=n;
        return;
    }
    n->ptr=head;
    head = n;
}

int main(){
    node* head=NULL;
    insertValueAtTail(head, 2);
    // insertValueAtTail(head, 3);

    insertValueAtTail(head,3);
    insertValueAtTail(head, 4);
    // insertValueAtTail(head, 5);

    displayLinkedList(head);
    cout<<endl;
    insertAtHEAD(head,5);

    displayLinkedList(head);

    cout<<"the search result in linked list is :- "<<search(head,3)<<endl;
    return 0;
}