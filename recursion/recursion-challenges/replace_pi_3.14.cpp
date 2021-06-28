#include<iostream>

using namespace std;


void replace(string s){

    if(s.empty()){
        return;
    }

    if(s[0]=='p'&&s[1]=='i'){
        cout<<"3.14";
        string s1=s.substr(2);
        replace(s1);
        
    }
    else
    {
        cout<<s[0];
        string s1=s.substr(1);
        replace(s1);    
    }
    


    // string s1=s.substr(1);
    // replace(s1);
    // cout<<s[0];

}

int main(){

    replace("pippcppaspiasc");
    cout<<endl;

    return 0;
}