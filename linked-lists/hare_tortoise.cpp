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
    node* n= new node(value);
    
    if(head == NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->ptr != NULL){
        temp = temp->ptr;
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

void makeCylce (node* &head, int pos){
    node* temp= head;
    node* startNode;

    int count=1;

    while(temp->ptr!=NULL){
        if(count==pos){
            startNode=temp;    // the value of the starting node of the cycle
        }
        temp=temp->ptr;
        count++;
    }

    temp->ptr=startNode;    // the value of the temp is at thelast node , after the loop gets over , so we are pointing the last node of the linked list back to startNode
}


bool detect_cycle(node* head){

    node* hare_ptr=head;
    node* tort_ptr=head;
    // bool r;
    while(hare_ptr!=NULL && hare_ptr->ptr!=NULL){
        tort_ptr=tort_ptr->ptr;
        hare_ptr=hare_ptr->ptr->ptr;

        if(hare_ptr==tort_ptr){
            cout<<"the linked list is cyclic !!!!"<<endl;
            return true;
        }

    }
    cout<<"the linked list is not cyclic"<<endl;
    return false; 

}



void removeCyclic(node* head){
    node* hare=head;
    node* tort=head;
    if(detect_cycle(head)==true){
        do{
            hare=hare->ptr->ptr;
            tort=tort->ptr;
        }while (hare!=tort);
    
    }
    else{
        cout<<"the linked list is not cyclic "<<endl;
        return;
    }
    
    //after the above loop the hare and tortose is checked the cyclic nature of the LL and they are both at same position 
    
    hare=head;

    while(tort->ptr!=hare->ptr){
        hare=hare->ptr;
        tort=tort->ptr;

    }
    tort->ptr=NULL;

}




int main(){
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    display(head);
    makeCylce(head,4);

    cout<<"is the linked list cyclic or not :- "<<endl<<detect_cycle(head);
    cout<<endl;
    cout<<"removing the cyclic nature of the linked list"<<endl;
    removeCyclic(head);
    cout<<"is the linked list cyclic or not :- "<<endl<<detect_cycle(head);


    display(head);

    return 0;
}