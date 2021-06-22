#include<iostream>

using namespace std;


int sum(int n){
    int s=0;
    if (n!=0){
        s=n+sum(n-1);
    }
    else
    {
        s=0;
    }
    

    return s;
}


int main(){

    int a=3;

    cout<<sum(a);

    return 0;
}