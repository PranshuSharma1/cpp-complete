L(node* head){
    node* temp=head;

    while(temp->ptr!=NULL){
        cout<<temp->data<<" | "<<temp->ptr<<" ==> ";

        temp=temp->ptr;
    }
    cout<<endl;

}