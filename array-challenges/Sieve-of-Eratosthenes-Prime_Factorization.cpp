#include<iostream>

using namespace std;

void prime(int m){
    // int n=m+1;
    int spf[100]={0};

    for(int i=2;i<=m;i++){
        spf[i]=i;
    }

    for(int i=2;i<=m;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=m;j+=i){
                if(spf[j]==j){
                    spf[j]= i;
                }
            }
        }
        
    }

    // cout<<m/spf[m]<<" "<<endl;
    while(m!=1){
        cout<<spf[m]<<" ";
        // cout<<m<<" ";
        m = m / spf[m];
    }

}


int main(){

    int n;
    cin>>n;
    prime(n);


    return 0;
}