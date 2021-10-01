// this is queue implementation via linked list

#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int value){
            data=value;
            next=NULL;
        }
};

class queue{
    public:
        node* front;
        node* back;

        queue(){
            front = NULL;
            back = NULL;
        }

        void enqueue(int value){
            node* temp=new node(value);
            if(front == NULL && back == NULL){  // this is for first element
                cout<<"queue is empty"<<endl;
                // front->data=value;
                front=temp;
                back=temp;
                return;
            }
            // else
            //     if(back==NULL)  // this is for the second element
            //     {
            //         back->data=value;
            //         front->next=back;
            //         return;
            //     }

            back->next=temp;
            back=temp;
            return;

        }

    void delqueue(){
        if(front==NULL){
            cout<<"the queue is empty"<<endl;
            return;
        }
        node* temp=front;
        front=front->next;
        delete temp;
    }

    int peek(){
        if(front == NULL ){
            cout<<"the queue is empty "<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
        if(front==NULL){
            cout<<"queue is empty "<<endl;
            return true;
        }
        cout<<"the queue is not empty "<<endl;
        return false;
    }


};



int main(){
    queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    cout<<q.peek()<<endl;
    q.delqueue();
    
    cout<<q.peek()<<endl;
    q.delqueue();
    
    cout<<q.peek()<<endl;
    q.delqueue();
    
    cout<<q.peek()<<endl;
    q.delqueue();
    
    cout<<q.peek()<<endl;
    q.delqueue();
    
    cout<<q.peek()<<endl;
    q.delqueue();

    q.empty();

    cout<<q.peek()<<endl;
    q.delqueue();

    q.empty();

    cout<<q.peek()<<endl;
    q.delqueue();
    q.empty();
    return 0;
}