#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string s1 = "aaabbbsasbbbaaaccjjjsaaafabbccc";

    sort(s1.begin(), s1.end());

    cout<<s1<<endl;
    int frequency=0, max_frequncy=0;
    char c;
    for(int i=0;i<s1.size()-1;i++){
        
        if(s1[i] == s1[i+1]){
            frequency++;
            
        }
        else
            frequency=0;

        if(max_frequncy < frequency){
            max_frequncy =  frequency;
            c = s1[i];
        }
    } 

    cout<<"the frequency is :- "<<max_frequncy<<endl;
    cout<<"the max repeated character  is :- "<<c<<endl;

    return 0;
}