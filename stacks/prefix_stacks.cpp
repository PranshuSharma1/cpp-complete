#include<iostream>
#include<stack>
#include<math.h>

using namespace std;

int postfix(string s){

    stack <int> st;
    int op1, op2;
    for(int i=0;i<s.length();i++){

        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');  // we are subtracting "0" because this will be a ASCII value , and we want to 
        }
        else
        {   cout<<"the top of stack is :- "<<st.top()<<endl;
            op1=st.top();
            st.pop();
            cout<<"the top of OPII stack is :- "<<st.top()<<endl;
            op2=st.top();
            st.pop();


            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                cout<<
                cout<<"the top of PUSHED value in  stack is :- "<<st.top()<<endl<<endl<<endl;
                break;
            case '-':
                st.push(op1-op2);
                cout<<"the top of PUSHED value in  stack is :- "<<st.top()<<endl<<endl<<endl;
                break;
            case '/':
                st.push(op2/op1);
                cout<<"the top of PUSHED value in  stack is :- "<<st.top()<<endl<<endl<<endl;
                break;
            case '*':
                st.push(op1*op2);
                cout<<"the top of PUSHED value in  stack is :- "<<st.top()<<endl<<endl<<endl;
                break;
            case '^':
                st.push(pow(op1,op2));
                cout<<"the top of PUSHED value in  stack is :- "<<st.top()<<endl<<endl<<endl;
                break;
            
            default:
                break;
            }
        }
        
    }
    return st.top();
}



int prefix(string s){

    stack <int> st;
    int op1, op2;
    for(int i=s.length()-1;i>=0;i--){

        if(s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');  // we are subtracting "0" because this will be a ASCII value , and we want to 
        }
        else
        {   
            op1=st.top();
            st.pop();
            op2=st.top();
            st.pop();


            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
        }
        
    }
    return st.top();
}

int main(){


    cout<<prefix("-+7*45+20")<<endl;
    cout<<postfix("46+2/5*7+")<<endl;

    return 0;
}