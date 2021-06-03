#include<iostream>
using namespace std;


int main(){
    int n=5;
    char str[n+1];
    cout<<"enter the string to check pallindrone :- ";
    cin>>str;
    
    int check = 1;
    for (int i =0;i<n;i++){
        // cout<<"the "<<i<<" value is "<<str[i]<<" and the "<<n-i-i<<" is "<<str[n-1-i]<<endl;
        if (str[i] != str[n-1-i]){
            check =0;
            break;
        }

    }

    if(check ==1){
        cout<<"this is pallindrone";
    }
    else
        cout<<"the string is not pallindrone";
    // sizeof(str); 
    return 0;
}

/* the out of the program is  :- 
this is pallindrone%    

*/