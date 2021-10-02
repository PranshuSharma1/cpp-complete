#include<iostream>
#include<stack>
using namespace std;

// to implement  queue (LIFO) , we need 2 stacks(FIFO)


class queue{
    stack <int> s1;
    stack <int> s2;
    
    public:
        // queue(){
        //     return;
        // }
        void enqueue(int value){
            s1.push(value);
        }
        int peek(){
            return s1.top();
        }

        bool empty(){
            return s1.empty();
        }

        void dequeue(){
            if(s1.empty()){
                cout<<"the Queue is empty "<<endl;
                return;
            }
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            cout<<"we are inside the sequeue function "<<s2.top()<<endl;
            s2.pop();
            while(!s2.empty()){
                s1.push(s2.top());
                s2.pop();
            }
            cout<<"the length of the queue is :- "<<s1.size()<<endl;
            cout<<"the top of the queue is :- "<<s1.top()<<endl;
        }
};


int main(){
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
// sdvbs

    return 0;
}