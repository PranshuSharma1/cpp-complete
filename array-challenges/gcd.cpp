#include<iostream>

using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    int n1=max(a,b);
    int n2=min(a,b);

    int rm=1;
    while (rm!=0)
    {
        rm = n1%n2;
        // cout<<"reminder is :- "<<rm<<endl;
        if (rm !=0)
        {    
            n1=n2;
            n2=rm;
        }
        
        // cout<<" n1 is:- "<<n1<<" and n2 is :- "<<n2<<endl;
    }
    
    cout<<n2;

    return 0;
}