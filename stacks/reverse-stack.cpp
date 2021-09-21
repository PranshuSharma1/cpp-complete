#include<iostream>
// #include <bits/stdc++>
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
    str.push(topele);
}

// stack<int> recur(stack<int> S, int N)
void recur(stack<int> &S, int N)
                {   cout<<"- - - - -- - ------------"<<endl<<endl;
                    cout<<"* * * * * * * * * * ** * * * ** * ** * * * * ** * * ** * * ** * * * ** *  ** "<<endl;
                    cout<<"########## we are in LOOP function :- "<<endl;
                    cout<<endl<<endl;
                    cout<<"the send element is :- "<<N<<endl;

	// If stack is empty
	if (S.empty()){
                    cout<<" in LOOP FUNC , as S is empty"<<endl;
                    cout<<"the send element is, in STACK at TOP :- "<<N<<endl;
		S.push(N);
    }

	else {
	                cout<<"we are poping the elements "<<S.top()<<endl;
		// Stores the top element
		int X = S.top();
                    cout<<"the VARIABLE X  in STACK at TOP :- "<<X<<endl;
		// Pop the top element
		S.pop();

		// Recurse with remaining elements
		// S = recur(S, N);
		recur(S, N);

		// Push the previous
		// top element again
		S.push(X);
	}
	// return S;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"WE GOING ARE OUT OF LOOP"<<endl;
}
void reverse(stack<int> &str){
        
    if(str.empty()){
            cout<<"the REVERSE function, STACK is EMPTY "<<endl;
        return;
    }
    int ele=str.top();
        cout<<"the REVERSE function, STACK TOP value :- "<<ele<<endl;
    str.pop();
    reverse(str);
    // insertAtBottom(str,ele);
        cout<<"the REVERSE function, STACK and ele value sending to RECUR fuction "<<endl;
        cout<<"the REVERSE function, STACK TOP value, that needs to send to RECUR func :- "<<ele<<endl;
    recur(str,ele);
    cout<<"# # # # # # # ## ## # # # # # #  # # # # # # # # # # # # # # # #  #"<<endl;
    cout<<"WE ARE OUT OF REVERSE FUNCT"<<endl;
}


int main(){

    stack<int> str;

    for(int i=1;i<=4;i++){
        str.push(i);
        // cout<<str.top()<<endl;
    }

    cout<<"outsied the initilization"<<endl;
    cout<<endl<<endl<<endl;
    reverse(str);
    cout<<"before the print"<<endl;
    // cout<<str.size()<<endl;

    while(!str.empty()){
        cout<<str.top()<<" ";

        str.pop();
    }cout<<endl; 
    // for(int i=str.size();i>0;i--){
    //     str.top();

    //     str.pop();

    // }

    return 0;
}