/* 
question:-
            https://www.youtube.com/watch?v=kJW_iXrwePE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=24       at 0:29 mins
*/

#include<iostream>
using namespace std;

void fisrt_repeating_element(int a[], int n){

    int N = 1e6+2;
    int idx[N]; 
    int min_idx= INT_MAX;
    for(int i=0;i<N;i++){
        idx[i] = -1;
    }

    for(int i=0;i<n;i++){

        if (idx[a[i]] != -1){
            min_idx = min(min_idx, idx[a[i]] );
        }
        else
            idx[a[i]] = i;
    }

    if( min_idx == INT_MAX){
        cout<<"-1"<<endl;
    }
    else
        cout<<min_idx+1<<endl;

}


int main(){

    int ar[]={1,5,3,4,3,5,6};

    return 0;
}