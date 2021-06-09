#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s1="ADKASdasda";

    // int a='A';
    // cout<<a;
    // s1.length();

    //this is for all lowers
    for (int i=0;i<s1.length();i++){
        if(int(s1[i]>=65) && int(s1[i]<=90) ){
            s1[i]=s1[i]+32;
        }
    }
    cout<<"all lowers way is :- "<<s1<<endl;

    //this is for all uppers
    for (int i=0;i<s1.length();i++){
        if(int(s1[i]>=97) && int(s1[i]<=122) ){
            s1[i]=s1[i]-32;
        }
    }
    cout<<"all UPPERS way is :- "<<s1<<endl;

    s1.assign("ßADKASdasda");
    // there is also a better way of doing it via algorithm 
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout<<s1<<endl;
    return 0;

    
}

/*

output is 

all lowers way is :- adkasdasda
all UPPERS way is :- ADKASDASDA
ßADKASDASDA
*/