#include<iostream>
using namespace std;

int main(){
    char str[10]; // = {'this is an car. In the city there is a Elephant. '};
    // cin>>str;
    cin.getline(str,10);
    cin.ignore();
    // int l =0;
    // for(int i=0;i<100;i++){
    //     if (str[i] == '\0' ){
    //         // l++;
    //         break;
    //     }
    //     else 
    //         l++;
    // }
    // cout<<"the length of string is :- "<<endl;

    int max_length=0, current_length=0;

    for(int i=0;i<10;i++){
        if (str[i]==' ' || str[i] =='\0')
        {
            if (max_length < current_length)
            {
                max_length = current_length;
            }
            current_length =0;
        }
        else
            current_length++;
        
        if (str[i]=='\0')
        {
            break;
        }
        
        
        
    }
    cout<<"the largest word in a sentence is :- "<<max_length;

    return 0;
}