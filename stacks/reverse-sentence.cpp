#include<iostream>
#include<stack>

using namespace std;


void reverse_sentence(string s){
    stack<string> str;

    string word="";

    cout<<*(s.end()-1)<<endl;
    for(int i=0;i<s.length();i++){

        if(s[i]==' ' | s[i]==*(s.end()-1)){
            if(s[i]==*(s.end()-1)){ // so that the last word of the string will also be included , or it will be get skipped
                word+=s[i];
            }
            str.push(word);
            word="";
        }
        else
        {
            word+=s[i];
        }
        

    }

    while(!str.empty()){
        cout<<str.top()<<" ";
        str.pop();
    }
    cout<<endl;

}


int main(){

    string s = "Hey, how r u douing>";

    reverse_sentence(s);



    return 0;
}