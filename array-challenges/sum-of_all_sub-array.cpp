/*
questions:-
    given an array [] of size n. output sum of each sub array of the given array

*/

#include<iostream>
using namespace std;



void sum_subArray(int ar[], int n){
    
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum = sum + ar[j];
            cout<<"the sum of subarray with  "<<i<<"is :-"<<sum<<endl;
        }
        
    }
}

int main(){
    int arr[7]={1,2,0,7,2};

    // cout<<"the size of arr is "<<sizeof(arr)/4;
    sum_subArray(arr,sizeof(arr)/4);

    return 0;
}
