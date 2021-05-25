/* 
question:-
            https://www.youtube.com/watch?v=kJW_iXrwePE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=24       at 7:55 mins
*/

#include<iostream>
using namespace std;


int main(){

    int ar[]={1,5,3,4,3,5,6};  //{1,2,3,8};  //{1,5,3,4,3,5,6};

    int s= 5;//7;//9;
    int n= sizeof(ar)/4;
    int st=0, en=0, i=0, j=0, sum =0;

    while(j<n && sum + ar[j]<= s){

        sum = sum + ar[j];
        j++;
    }

    if(sum == s){
        cout<<"we got the sum at:-"<<i<<" and "<<j-1;
        return 0;
    }

    while(j<n && i<j){
        sum = sum +  ar[j];

        while(sum > s){
            sum = sum - ar[i];
            i++;
        }

        if (sum ==s){
            st = i+1;
            en = j+1;
            break;
        }
        j++;


    }

    cout<< st <<" "<<en<<endl; 

    return 0;
}