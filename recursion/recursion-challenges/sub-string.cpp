#include<iostream>

using namespace std;

void subst(string s, string ans){

    if(s.empty()){
        cout<<ans<<endl;
        return;
    }
    // cout<<"the string  s is :- "<<s<<endl;
    // cout<<"the anser string is :- "<<ans<<endl;
    char a = s[0];
    string s1=s.substr(1);

    subst(s1,ans);
    subst(s1,ans+a);


}

int main(){

    subst("ABC","");

    cout<<endl;


    return 0;
}