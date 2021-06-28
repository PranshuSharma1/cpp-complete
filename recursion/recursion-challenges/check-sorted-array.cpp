#include<iostream>

using namespace std;


bool check_sort(int arr[], int n){

    if (n==1){
        return true;
    }
    bool p= check_sort(arr+1, n-1);  // here arr+1 means that it will start from the index 1 rather than from 0

    return (arr[0]<arr[1] && p);
}

int main(){

    int arr[]={1,2,3,4,5};

    cout<<check_sort(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}