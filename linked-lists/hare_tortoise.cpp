#include<iostream>

using namespace std;

class node {
    public:
        int data;
        node* ptr;
        node(int value){
            data=value;
            ptr=NULL;
        }
};


void insert(node* &head, int value){
    node n= new node(value);
    
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
void display (node* head){

    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" | "<<temp->ptr<<" --> ";
        temp=temp->ptr;
    }
    cout<<endl;
}

bool detect_cycle(node* head){

    node* hare_ptr=head;
    node* tort_ptr=head;
    // bool r;
    while(hare_ptr!=NULL && hare_ptr->ptr!=NULL){
        hare_ptr=hare_ptr->ptr;
        tort_ptr=tort_ptr->ptr->ptr;

        if(hare_ptr==tort_ptr){
            cout<<"the linked list is cyclic !!!!";
            return true;
        }

    }
    return false; 

}




int main(){



    return 0;
}