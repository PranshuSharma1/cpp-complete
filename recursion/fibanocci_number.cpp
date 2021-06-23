#include<iostream>

using namespace std;

int fibonacci(int n){

    if (n==1){
        return 0;
    }
    else if (n==2)
    {
        return 1;
    }
    
    return fibonacci(n-1)+ fibonacci(n-2);
    

}

int main(){

    int a;
    cin>>a;
    cout<<fibonacci(a);


    return 0;
}