#include<iostream>

using namespace std;

string remode_duplicate(string s){

    if(s.empty()){
        return "";
    }

    char s1=s[0];

    string s2=remode_duplicate(s.substr(1));

    if(s2[0]==s1){

        return s2;
    }
    return (s1+s2);

}



int main(){

    cout<<remode_duplicate("aaabbbbcccaaadddddeeeee");

    return 0;
}