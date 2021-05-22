/* 
question:-

*/

#include<iostream>
using namespace std;

void longest_arth_subarray(int ar[],int n){
    int pd, current_length=0, max_length=0;
    for(int i=0;i<n;i++){   
        pd = ar[i+1] - ar[i];
        // cout<<"the pd between"<<ar[]
        for(int j=0;j<n;j++){
            
            if (ar[j]+pd == ar[j+1]){
                current_length++;
            }
            else if(ar[j-1] )
            // else if (max_length < current_length){
            //     max_length =current_length;
            // }

        }
        if (max_length < current_length){
                max_length =current_length;
        }

    }
    cout<<"max length of the array is:-"<<max_length;

}




int main(){
    // int test,n;
    // cout<<"enter the number of test cases:-";
    // cin>>test;
    // cout<<"enter the number of N;-";
    // cin>>n;


    int ar[] = {1,3,7,9,11,12,13,14,15,16,17,18,20,23,24,27,34,56,8,9};
    longest_arth_subarray(ar, sizeof(ar)/4);
    return 0;
}