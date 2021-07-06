#include<iostream>

using namespace std;

int partition(int arr[], int l, int r){

    int pivot=arr[r];

    int i=l-1;

    for(int j=l;j<r;j++){
        if(arr[j]< pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);

    return i+1;

}

void Quick_sort(int arr[], int l, int r){

    if(l<r){
        int p=partition(arr,l,r);

        Quick_sort(arr, l, p-1);
        Quick_sort(arr, p+1, r);

    }


}


int main(){

    int arr[]={6,3,9,5,2,8,7};

    Quick_sort(arr, 0 , sizeof(arr)/sizeof(arr[0]) -1);

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]); i++){
        cout<<arr[i]<<" ";

    }

    return 0;
}