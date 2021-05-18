#include<iostream>
using namespace std;

void fac(int n){

    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial*=i;
    }
    cout<<"the factorial of number "<<n<<"is :-"<<factorial;
}


int main(){
    int n;
    cout<<"enter the number whose factoriual u want:-";
    cin>>n;
    fac(n);
    return 0;
}

/* the output of the code is :- 

enter the number whose factoriual u want:-4
the factorial of number 4is :-24%                                                                                                                                                                  

enter the number whose factoriual u want:-10
the factorial of number 10is :-3628800%      
*/