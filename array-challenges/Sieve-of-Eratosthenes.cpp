#include<iostream>

using namespace std;

void sieve(int n){

    int s[100]={0};

    for (int i=2;i<+n;i++){  // here this is 2 because , 1 divides everything 

        if(s[i]==0){
            for(int j=i*i; j<=n; j+=i){
                s[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(s[i]==0){
            cout<<i<<" , ";
        }
    }cout<<endl;

}

int main(){

    int n;
    cout<<"enter the number of primes u want till :-";
    cin>>n;
    sieve(n);


    return 0;
}

/* 
output of the program :-


enter the number of primes u want till :-50 
2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47 ,

*/