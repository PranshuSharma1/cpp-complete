#include<iostream>
#include<string>       // for the string function
#include<algorithm>    // for the sort fucntion 

using namespace std;

int main(){
    string s1="abc";
    string s2="xyz";
    cout <<s1 + s2<<endl;  // this is a normal way to append 2 strings

    cout<<s1.append(s2)<<endl;    // this line also dies the same thing as "+"

    s1.clear();   // this clears the string
    cout<<s1;

    if(s1.empty()==1){              // empty checks whether the string is empty or not and retruns the value in true or false or in 0 and 1
        cout<<"the string s1 is empty"<<endl;
    }
    s1.assign("asgcdkshgcsd");  // assign fuction replaces the string value if there is any
    cout<<"the output of the find :- "<<s1.find('c')<<endl; // gives the value of the place where c uis present first
    cout<<s1<<endl;
    s1.erase(1,2);   // here 1 is the starting index and 2 is the number of characters to erase
    cout<<"the output of the erase :- "<<s1<<endl;

    s1.insert(1,"sg"); // isert fuc=nction inserts the characters string from the given index number here it is 1
    cout<<"here the insert is done :-"<<s1<<endl;

    s1.insert(0,"123"); // isert fuc=nction inserts the characters string from the given index number here it is 1
    cout<<"here the insert is done :-"<<s1<<endl;


    cout<<"the size of s1 :- "<<s1.size()<<endl;

    cout<<"the substring of s1 from 1 , and number of charcters are 10 :- "<<s1.substr(1,10)<<endl;

    string s3="1234";
    int s = stoi(s3);   // stoi is string to intergers

    cout<<"the integer from the string is :- "<<s<<endl;

    cout<<"the string from int  is :- "<<to_string(s)<<endl;


    cout<<"the comapre the 2 strings s1 and s2 :-"<<s2.compare(s1)<<endl;

    sort(s1.begin(), s1.end());
    cout<<"the sorting of the array s1 is :- "<<s1<<endl;
    // cout<<s2.begin();
    // cout<<"the begining of the string s1 is :- "<<s1.begin()<<endl;

    // cout<<"the end of the string s1 is :- "<<s1.end()<<endl;

    return 0;
}