#include<iostream>

using namespace std;


void wave_sort(int ar[], int n){
    
    for(int i=1;i<n;i+=2){

        if(ar[i]>ar[i-1]){
            swap(ar[i], ar[i-1]);
        }
        if (ar[i]>ar[i+1] && i<=n-2){
            swap(ar[i], ar[i+1]);
        }
        
        
    }

    for(int i=0;i<n;i++){
        cout<<ar[i]<<" , ";
    }

}

int main(){

    int arr[]={1,3,4,7,5,6,2};

    wave_sort(arr, sizeof(arr)/sizeof(arr[0]));


    return 0;
}