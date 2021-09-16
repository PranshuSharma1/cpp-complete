/*
1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9

    so if k=3,
    the final linked list should be 
    7 -> 8 -> 9 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 
*/


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

void insert(node* &head, int value){

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

}


void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->ptr;
    }

    cout<<endl;
}

int length(node* head){
    int len=0;
    node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->ptr;
    }

    return len;
}


void append_last_k_node(node* &head, int k){

    int len=length(head);

    int tail_count=len-k, count=1;
    if(tail_count<0){                   // or a better way could be tail_count=len%k, which will get us a reminder of this
        cout<<"the operation is not being able to be done "<<endl;
    }
    node* temp=head;
    node* newHead;
    node* newTail;
    while(temp!=NULL && count<tail_count){ // the loop breaks just at the position of the linked list breaking point
        temp=temp->ptr;
        count++;
        cout<<count<<endl;
    }
    cout<<"the value of the count outside LOOP is :- "<<count<<endl;
    newTail=temp;
    newHead=temp->ptr;
    newTail->ptr = NULL;
    cout<<newTail->data<<endl;
    cout<<newHead->data<<endl;
    cout<<"the new tail pointer :- "<<endl;//<<newTail->data<endl;
    // for the new head and appending
    node* temp1=newHead;   
    cout<<temp1->data<<endl;
    while(temp1->ptr != NULL){
        temp1=temp1->ptr;
        cout<<temp1->data<<" | "<<temp1->ptr<<endl;
    }
    cout<<temp1->data<<endl;
    temp1->ptr=head;
    head=newHead;

}

int main(){

    int k=3;
    node* head=NULL;

    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    insert(head,9);

    display(head);


    cout<<"the length of the linked list is :- "<<length(head)<<endl;


    append_last_k_node(head,3);

    display(head);

   return 0;
}