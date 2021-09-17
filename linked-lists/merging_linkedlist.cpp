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


void merge(node* head1, node* head2){
    node* temp1=head1;
    node* temp2=head2;

    node* head3=new node(99);   // we cant use " node* head3=NULL; " as this would let the head=n, as the first elemebt , rather than pointing the first element to the node of any of ones linked list
    node* temp3 =  head3;
    while(temp1!=NULL && temp2!=NULL){
        if(temp1->data < temp2->data){
            temp3->ptr=temp1;
            temp1=temp1->ptr;
            // temp3=temp3->ptr;
        }
        else{
            temp3->ptr=temp2;
            temp2=temp2->ptr;
            // temp3=temp3->ptr;
        }
        temp3=temp3->ptr;   // both ways temp3 always move forward 

    }
    if(temp1==NULL){
        while(temp2!=NULL){
            temp3->ptr=temp2;
            temp2=temp2->ptr;
            temp3=temp3->ptr;
        }
    }
    else
    {
        temp3->ptr=temp1;
        temp1=temp1->ptr;
        temp1=temp1->ptr;
    }
    
    head3=head3->ptr;
    display(head3);
}



node* merge_recursive(node* &head1, node* &head2){

    node* result;

    node* temp1=head1;
    node* temp2=head2;


    cout<<endl<<endl;

    if(temp1==NULL){
        return temp2;
    }

    if(temp2==NULL){
        return temp1;
    }


    if(temp1->data < temp2->data){
        result=temp1;
        cout<<"result=temp1; "<<endl;
        cout<<"the value of result "<<result->data<<endl;
        cout<<"the value of temp1 "<<temp1->data<<endl;
        cout<<"the value of temp2 "<<temp2->data<<endl;

        result->ptr = merge_recursive(temp1->ptr, temp2);
    }
    else{
        result=temp2;

        cout<<"result=temp2; "<<endl;
        cout<<"the value of result "<<result->data<<endl;
        cout<<"the value of temp1 "<<temp1->data<<endl;
        cout<<"the value of temp2 "<<temp2->data<<endl;
        
        result->ptr = merge_recursive(temp1, temp2->ptr);

    }

    return result;

}



int main(){
    // first sorted linked list
    node* head=NULL;
    insert(head,1);
    insert(head,5);
    insert(head,7);
    insert(head,8);
    insert(head,10);
    insert(head,16);

    display(head);

    // second sorted linked list
    node* head1=NULL;
    insert(head1,2);
    insert(head1,4);
    insert(head1,11);
    insert(head1,18);
    insert(head1,20);
    insert(head1,26);

    display(head1);


    // merge(head,head1);

    display(head);
    display(head1);
    node* new_head=merge_recursive(head,head1);

    display(new_head);


    display(head1);

    display(head);

    return 0;
}