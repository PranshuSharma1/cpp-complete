
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