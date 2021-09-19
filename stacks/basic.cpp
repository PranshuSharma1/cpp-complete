#include<iostream>

using namespace std;

#define n 100
class stack{
    int* arr;
    int top;

    public:
        stack(){
            arr=new int[n];
            top=-1;
        }

        void push(int value){

            if(top==n-1){
                cout<<"stack overflow"<<endl;
                return;
            }

            top++;
            arr[top]=value;
        }

        void pop(){
            if(top==-1){
                cout<<"the stack is empty"<<endl;
                return;
            }

            top--;
        }

        void Top(){
            if(top==-1){
                cout<<"the stack is empty"<<endl;
                return;
            }
            cout<<arr[top]<<endl;
            // return
        }

        bool empty(){
            if(top==-1){
                cout<<"the stack is empty"<<endl;
                return true;
            }
            else{
                cout<<"the stack is not empty"<<endl;
                return false;
            }
        }


};


int main(){

    stack str;
    str.push(1);
    str.Top();
    str.push(2);
    str.Top();
    str.push(3);
    str.Top();
    str.push(4);
    str.Top();
    str.push(5);
    str.Top();

    str.pop();
    str.pop();
    str.pop();
    str.pop();
    str.pop();

    str.Top();

    str.empty();

    return 0;
}