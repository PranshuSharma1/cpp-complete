#include<iostream>
#include<string>

using namespace std;

int main(){
    
    string s1="230986324";

    sort(s1.begin(), s1.end(), greater<int>());
    cout<<s1;
    return 0;
}