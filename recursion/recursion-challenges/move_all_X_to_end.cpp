#include<iostream>

using namespace std;

string moveAllX(string s){
    cout<<"string s is :- "<<s<<endl;
    if(s.empty()){
        return "";
    }

    char ch=s[0];

    string s1 = moveAllX(s.substr(1));
    // string s1=move(s.substr(1));
    
    if(ch == 'x'){
        return s1+ch;
    }

    return ch+s1;

}


int main(){

    cout<<moveAllX("axxaxhvxlgxalxas")<<endl;

    return 0;
}