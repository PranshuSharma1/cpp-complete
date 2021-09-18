//Put Even Position Nodes after Odd Position Nodes

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
        // cout<<"insert at head"<<endl;
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



void even_odd(node* head){
    node* odd=head;
    node* even=head->ptr;
    node* evenStart=even;
    // node* head_new=odd;
    // node* temp=head_new;

    while(odd->ptr!=NULL && even->ptr!=NULL){
        odd->ptr=even->ptr;
        odd=odd->ptr;

        even->ptr=odd->ptr;
        even=even->ptr;
    }
    odd->ptr=evenStart;
    cout<<odd->data<<endl;
    cout<<odd->ptr->data<<endl;

    // if(odd->ptr==NULL){
    //     even->ptr=NULL;
    //     cout<<" the if statement";
    // // cout<<odd->ptr->data<<endl;
    // }


    display(head);

}



int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    // insert(head,6);

    display(head);

    even_odd(head);
    display(head);
    return 0;
}