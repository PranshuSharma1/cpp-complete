#include<iostream>

using namespace std;


int main(){

    int t;
    cin>>t;

    for(int x=1;x<=t;x++){
        int n,k;
        cin>>n>>k;

        int arr[n];

        // input the array
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        // the main code logic
        if(k>n){
            k=k%n;
        }
        int rot_arr[k];
        for(int i=0;i<k;i++){
            rot_arr[i]=arr[n-i-1];
        }
        int a=1;
        for(int j=n-1-k;j>=0;j--){
            
            arr[n-a]=arr[j];
            a++;
        }
        for(int i=0;i<k;i++){
            arr[i]=rot_arr[k-1-i];
        }

        // display the arr
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}