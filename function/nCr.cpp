#include<iostream>
using namespace std;



int fac(int n){
    int factorial=1;
    if(n==0){
        return 1;
    }
    for (int i=1;i<=n;i++){
        factorial*=i;
    }
    // cout<<factorial<<endl;
    return factorial;
}

void nCr(int n, int r){
    cout<<(fac(n)/(fac(n-r)*fac(r)));
}

int main(){
    int n,r;
    cout<<"enter the value of n:-";
    cin>>n;
    cout<<"enter the value of r:-";
    cin>>r;
    nCr(n,r);

    return 0;
}

/*  the output of the code:- 

enter the value of n:-5
enter the value of r:-2
10

*/