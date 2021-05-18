#include<iostream>
using namespace std;



int fac(int n){
    int factorial=1;
    if(n==0){
        return 0;
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
    int row;
    cout<<"enter the value of number of rows:-";
    cin>>row;
    // nCr(n,r);

    for (int i=0;i<row;i++){
        for(int j =0;j<row;j++){
            nCr(i,j); cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}