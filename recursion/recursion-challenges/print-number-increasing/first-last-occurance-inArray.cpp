#include<iostream>

using namespace std;

int first_occ(int arr[], int n, int p, int i){


    if (n==0){
        return -1;
    }
    
    // first_occ(arr+1, n-1,p);
    
    if ( arr[0] == p){
        cout<<i<<" ";
        return i;
    }

    return first_occ(arr+1, n-1,p,i+1);
    // first_occ(arr+1, n-1,p);

}

int last_occ(int arr[], int n, int p){


    if (n==0){
        return -1;
    }
    
    // last_occ(arr+1, n-1,p);
    // first_occ(arr+1, n-1,p);
    
    if ( arr[n-1] == p){
        cout<<n-1<<" ";
        return n-1;
    }

    return last_occ(arr, n-1,p);

}


int main(){

    int ar[]={2,6,3,2,3,6,2,1,6,8,3,7};

    // cout<<sizeof(ar)/sizeof(ar[0])<<" "<<endl;
    cout<<"first occurence :-";
    first_occ(ar, sizeof(ar)/sizeof(ar[0]), 3, 0);
    cout<<endl;
    cout<<"last occurence :-";
    last_occ(ar, sizeof(ar)/sizeof(ar[0]), 3);

    return 0;
}