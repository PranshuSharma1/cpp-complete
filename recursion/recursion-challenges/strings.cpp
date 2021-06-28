#include<iostream>

using namespace std;


void reverse( string s){

    if (s.length()==0){
        return;
    }

    string s1=s.substr(1);
    reverse(s1);
    cout<<s[0];

}

int main(){
    
    reverse("hello");


    return 0;
}