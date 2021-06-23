#include<iostream>

using namespace std;


int factorial(int n){

    int f=1;

    if (n==0){
        return 1;
    }

    f=n*factorial(n-1);

    return f;
}

int main(){

    cout<<factorial(2);


    return 0;
}