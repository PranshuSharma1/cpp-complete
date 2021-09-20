#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int> &str, int ele){

    if(str.empty()){
        str.push(ele);
        return;
    }

    int topele=str.top();
    str.pop();

    insertAtBottom(str,ele);

}


void reverse(stack<int> &str){


    if(str.empty()){
        return;
    }
    int ele=str.top();
    str.pop();
    reverse(str);
    insertAtBottom(str,ele);
}


int main(){

    stack<int> str;

    for(int i=1;i<=5;i++){
        str.push(i);
        // cout<<str.top()<<endl;
    }

    cout<<"outsied the initilization"<<endl;

    // reverse(str);
    cout<<"before the print"<<endl;
    // cout<<str.size()<<endl;

    while(!str.empty()){
        cout<<str.top()<<endl;

        str.pop();
    }cout<<endl; 
    // for(int i=str.size();i>0;i--){
    //     str.top();

    //     str.pop();

    // }

    return 0;
}