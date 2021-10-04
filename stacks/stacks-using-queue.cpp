#include<iostream>
#include<stack>
#include<queue>
using namespace std;


class stacks{
    queue <int> q1;
    queue <int> q2;

    public:
        void push(int value){
            q1.push(value);
        }

        int pop()
        {
            if(q1.empty()){
                return -1;
            }
            int x;
                while(q1.size()!=1){
                    q2.push(q1.front());
                    q1.pop();
                };
        //         while(q1.size()!=1)
        //  {
        //   x=q1.front();
        //   q1.pop();
        //   q2.push(x);
        //  }
        
        //         int ret=q1.front();
        //  q1.pop();
        //  while(!q2.empty())
        //  {
        //   x=q2.front();
        //   q2.pop();
        //   q1.push(x); 
        //  }
        //  return ret;
                int element;
                element=q1.front();
                q1.pop();
                swap(q2,q1);
                return element;

            // return 0;
        }
        bool empty(){
            return q1.empty();
        }

        int top(){
            return q1.back();
        }
    
};


int main(){
    stacks s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    cout<<s1.top()<<endl;
    cout<<"the poped element is :- "<<s1.pop()<<endl;


    return 0;
}