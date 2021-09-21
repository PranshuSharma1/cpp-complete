#include<iostream>
#include<stack>

using namespace std;

void bottom(stack<int> &str, int ele){
// cout<<"------------------------------------"<<endl;
// cout<<"***************** we are in BOTTOM function :- "<<endl;
// cout<<endl<<endl;


    if(str.empty()){
        cout<<"if the stack is empty"<<endl;
        str.push(ele);          // as the element will be pushed in the bottom 
        return;
    }
    // else{

    //     int top_ele=str.top();

    //     str.pop();


    //     bottom(str, ele);

    //     str.push(top_ele);          // ele will be pushed back to top again    
    // }
    int top_ele=str.top();
    cout<<"the value of top ele :- "<<top_ele<<endl;
        str.pop();


        bottom(str, ele);

        str.push(top_ele);   


}



void rever(stack<int> &str){
// cout<<"################# #################"<<endl;
// cout<<"########## we are in REVERSE function :- "<<endl;
// cout<<endl<<endl;



    if(str.empty()){
        return;
    }

    int ele=str.top();

    str.pop();

    rever(str);

    bottom(str, ele);

}




int main(){


    stack<int> str;
    // str.push(1);
    // str.push(2);
    // str.push(3);
    // str.push(4);
    // // cout<<"the size of the stack is :-"<<str.size()<<endl;
    // // for(int i=0;i<=str.size();i++){
    // //     cout<<"the value of i :- "<<i<<"  --> ";
    // //     cout<<str.top()<<" ";
    // //     str.pop();
    // //     cout<<endl;
    // // }cout<<endl;

    // while(!str.empty()){
    //     cout<<str.top()<<" ";
    //     str.pop();
    // }
    // cout<<endl;
    
    str.push(1);
    str.push(2);
    str.push(3);
    str.push(4);

    rever(str);

    // while(!str.empty()){
    //     cout<<str.top()<<" ";
    //     str.pop();
    // }
    // cout<<endl;

cout<<"the size of the stack is :-"<<str.size()<<endl;
for(int i=0;i<=str.size();i++){
        cout<<"the value of i :- "<<i<<"  --> ";
        // cout<<str.top()<<" ";
        // str.pop();
        // cout<<endl;
    }cout<<endl;


    // for(int i=0;i<str.size();i++){
    //     cout<<str.top()<<" ";
    // }cout<<endl;


    return 0;
}