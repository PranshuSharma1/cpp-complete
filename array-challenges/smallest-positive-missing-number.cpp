/*
// https://www.youtube.com/watch?v=kJW_iXrwePE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=24       at 16:15 mins

*/

#include<iostream>

using namespace std;

int main(){

    int ar[]={0,-9,1,2,3,-4,5};
    int n=sizeof(ar)/4;

    int check[n];

    for(int i=0;i<n;i++){
        check[i]=0;
    }
    
    for(int i =0;i<n;i++){
        if (ar[i] >= 0){
            check[ar[i]] = 1;
        }
        
    }

    for(int i=0;i<n;i++){

        if (check[i]==0){
            cout<<"the given number is :-"<<i;
            break;
        }
    }

    return 0;
}