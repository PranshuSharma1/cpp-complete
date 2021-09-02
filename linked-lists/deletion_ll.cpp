#include<iostream>
using namespace std;

class node {
    public:
        int data;
        node* ptr;

        node(int value){
            data = value;
            ptr = NULL;
        }

};


void insertAtTail(node* &Head, int value){
    node* temp = Head;
    node* n = new node(value);

    if(Head== NULL){
        Head=n;
        return;
    }

    while(temp->ptr != NULL){
        temp=temp->ptr;
    }
    temp->ptr=n;

    return;
}

void Display_LL(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" | "<<temp->ptr<<" ==> ";

        temp=temp->ptr;
    }
    cout<<endl;

}


void deletion_ll(node* &head, int val){
    node* temp=head;

    if (head==NULL){
        cout<<"the linked list is already empty"<<endl;
        return;
    }
    
    
    if(head->data==val){
        node* toDelete=head;
        head=head->ptr;
        delete toDelete;
        return;
    }
    else
    {
        while(temp->ptr->data!=val){
            temp=temp->ptr;   // this is for incrementation
        }
        node* toDelete=temp->ptr;
        temp->ptr=temp->ptr->ptr;

        delete toDelete;  // delete is used for the deletion of the arrayand pointers which are created by new keyword
    }
    

}

int main(){
    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    Display_LL(head);
    deletion_ll(head,4);
    Display_LL(head);
    deletion_ll(head,2);
    Display_LL(head);

    return 0;
}