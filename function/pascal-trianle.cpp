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
    int row;
    cout<<"enter the value of number of rows:-";
    cin>>row;
    // nCr(n,r);

    // cout<<fac(0);
    for (int i=0;i<row;i++){
        for(int j =0;j<=i;j++){
            nCr(i,j); cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/* output 
enter the value of number of rows:-5
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
*/