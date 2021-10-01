// this is the queue implementation by array
#include<iostream>

using namespace std;

#define n 100 

class queue{
    int* arr;
    int front;
    int back;

    public:
        queue(){
            arr= new int [n];
            front=-1;
            back=-1;
        }

        void enqueue(int value){
            if(back==n-1){
                cout<<"the queue is overflow"<<endl;
                return;
            }
            if(front==-1 && back==-1){
                front++;
                back++;
                arr[front]=value;
                return;
            }

            back++;
            arr[back]=value;
        }

        void delqueue(){
            if(front==-1 && back==-1){
                cout<<"queue is empty"<<endl;
                return;
            }
            if(front >n-1){
                cout<<"the queue is overflow now";
                return;
            }
            front++;
            return;

        }

        int peek(){
            if(front ==-1 || front > back){
                cout<<"no elements in queue "<<endl;
                return -1;
            }
            return arr[front];
        }
        bool empty(){
            if(front ==-1 && back==-1){
                cout<<"queue is empty "<<endl;
                return true;
            }
            if(front > back){
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