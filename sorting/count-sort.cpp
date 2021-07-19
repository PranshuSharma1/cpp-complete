#include<iostream>

using namespace std;

void count_sort(int arr[], int n){
    //finding the maximum element in the array
    int max_num=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max_num){
            max_num=arr[i];
        }
    }
                    
    //count array 
    int c_arr[max_num+1];
    for(int i=0;i<=max_num;i++){
        c_arr[i]=0;
    }

    for(int i=0;i<n;i++){
        c_arr[arr[i]]++;
    }
    // position array
    int p_arr[max_num+1];

    for(int i=0;i<=max_num;i++){
        if(i==0){
            p_arr[i]=c_arr[i];
        }
        else
        {
            p_arr[i]=p_arr[i-1]+c_arr[i];
        }

    }

    int e_arr[n];

    // for testing 
    // for(int i=0;i<=max_num;i++){
    //     cout<<p_arr[i]<<" , ";
    // }
    cout<<endl;
    for(int i=n-1;i>0;i--){
        cout<<arr[i]<<" , "<<endl;
        p_arr[arr[i]]--;
        // cout<<endl;
        // cout<<p_arr[arr[i]];
        e_arr[p_arr[arr[i]]] = arr[i];

    }

    //display the array
    for(int i=0;i<n;i++){
        cout<<e_arr[i]<<" , ";
    }
    

}




int main(){

    int arr[]={1,3,2,3,4,1,6,4,3};


    count_sort(arr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}