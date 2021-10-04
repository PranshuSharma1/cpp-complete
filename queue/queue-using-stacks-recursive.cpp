#include<iostream>
#include<stack>
// #include<queue>
using namespace std;

// queue <int> q;



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

            cout<<"the value of x is :- "<<x<<endl;

            if(s1.empty()){
                cout<<"the stack is empty now !!!!!!!!!! "<<endl;
                cout<<"the value of x is :- "<<x<<endl;
                return x;                                       // this wull return the last value of the stack , which we need to remove from the stack , to act it like a queue 
            }
            int item=dequeue();
            cout<<"the value of item is :- "<<item<<endl;
            s1.push(x);
            cout<<"s1.push(x), the value of x is :- "<<x<<endl;
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

    // cout<<"the deleted element is :- "<<q.dequeue()<<endl;
    // cout<<q.peek()<<endl;
    
    // cout<<"the deleted element is :- "<<q.dequeue()<<endl;
    // cout<<q.peek()<<endl;

    q.enqueue(1);
    cout<<q.peek()<<endl;

    return 0;
}