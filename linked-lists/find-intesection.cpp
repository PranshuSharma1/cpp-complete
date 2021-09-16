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

void insert(node* & head, int value){
    node* n = new node(value);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;

    while (temp->ptr!=NULL)
    {
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

void instersect( node* head1, node* head2, int pos){
    node* temp1=head1;
    
    node* temp2=head2;

    cout<<temp1->data<<endl;
    cout<<temp2->data<<endl;


    pos--;          // as the head is the position 1
    while(pos>0){
        // cout<<"inside loop";
        temp1=temp1->ptr;
        pos--;
    }
    cout<<temp1->data<<endl;
    while(temp2->ptr!=NULL){
        temp2=temp2->ptr;
    }

    cout<<temp2->data<<endl;
    temp2->ptr=temp1;

}
int length(node* head){
    int l=0;
    
    node* temp=head;

    while(temp!=NULL){
        temp=temp->ptr;
        l++;
    }
    return l;
}


int detect_intersection(node* head1,node* head2){

    int l1=length(head1);
    int l2=length(head2);
    int d;

    node* temp1;   //=head1;
    node* temp2;   //=head2;
    //juust to find a lengther linked list
    if(l1>l2){
        d=l1-l2;
        temp1=head1;
        temp2=head2;
    }
    else{
        d=l2-l1;
        temp1=head2;            // just that the the bigger linked list is pointing to the temp1
        temp2=head1;
    }

    while(d){
        if(temp1==NULL){
            return -1;
        }
        temp1=temp1->ptr;
        d--;
    }
    while(temp2->ptr!=NULL && temp1->ptr !=NULL){
        if(temp1==temp2){
            cout<<"the 2 linked list have intersection at point  "<<temp1->data<<endl;
            return 1;
        }
        temp2=temp2->ptr;
        temp1=temp1->ptr;
    }    


    return 0;

}



int main(){
    //linked list 1
    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);

    display(head);

    //second linked list
    node* head1=NULL;
    insert(head1,11);
    insert(head1,12);
    insert(head1,13);

    display(head1);

    instersect(head, head1, 5);

 

    display(head1);



    detect_intersection(head1,head);





    return 0;
}