#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack <int> s1;


    public:
        void enqueue(int value){
            s1.push(value);

        }
        int peek(){
            return s1.top();
        }
        bool empty(){
            return s1.empty();
        }

        int dequeue(){
            if(s1.empty()){
                cout<<"the queue is empty "<<endl;
                return 0;
            }

            int x=s1.top();
            s1.pop();

            if(s1.empty()){
                return x;
            }
            int item=dequeue();
            s1.push(x);
            return item;
        }
};




int main(){

    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    cout<<"the deleted element is :- "<<q.dequeue()<<endl;
    cout<<q.peek()<<endl;

    cout<<"the deleted element is :- "<<q.dequeue()<<endl;
    cout<<q.peek()<<endl;
    
    cout<<"the deleted element is :- "<<q.dequeue()<<endl;
    cout<<q.peek()<<endl;

    q.enqueue(1);
    cout<<q.peek()<<endl;

    return 0;
}