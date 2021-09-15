#include<iostream>

using namespace std;


class node{
    public:
        node * prev;
        node * ptr;
        int data;

        node(int value){
            data=value;
            prev=NULL;
            ptr=NULL;
        }
};


void insertAtTail(node* &head, int value){

    node* n=new node(value);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->ptr!=NULL){
        temp=temp->ptr;

    }
    temp->ptr=n;
    n->prev=temp;


}

void insertAtHead(node* &head, int value){

    node* n=new node(value);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;

    temp->prev=n;
    n->ptr=temp;

    head=n;


}


void deletionAtHead(node* &head){
    node* temp=head;

    temp->ptr->prev=NULL;
    head=temp->ptr;

    delete temp;
    
}

void deletion(node* &head, int value){

    node* temp=head;
    int counter=0;

    if(head->data==value){
        deletionAtHead(head);
        return;
    }


    while(temp!=NULL){
        if(temp->data==value){
            temp->prev->ptr = temp->ptr;
            if(temp->ptr!=NULL){        // if the node to be deleted is the last l=node of the linked list then
                temp->ptr->prev = temp->prev;
            }
            delete(temp);
            counter=1;
            return;
        }
        

        temp=temp->ptr;
    }

    if(counter==0){
            cout<<"the value "<<value<<" is not found in the linked list";
    }

}

void display(node* head){

    node* temp=head;

    while(temp!=NULL){
        cout<<"<--"<<temp->prev<<" | "<<temp->data<<" | "<<temp->ptr<<" --> ";

        temp=temp->ptr;
    }
    cout<<endl;
}

int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    cout<<endl<<endl;
    insertAtHead(head,10);
    display(head);

    deletion(head,5);
    display(head);

    cout<<endl<<endl;
    deletion(head,10);
    display(head);

    return 0;
}