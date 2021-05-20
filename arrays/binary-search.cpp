#include<iostream>
using namespace std;

int BinarySearch (int ar[],int n, int k){
    int start=0, end=n;
    int flag=0;
    // for(int i=0;i<=n/2;i++){
    while(start<=end){
        
        int mid=(start+end)/2;

        if(ar[mid]==k){
            cout<<"element found";
            return mid;
            
        }
        else if(k<ar[mid]){
                end=mid-1;
            }
            else  if(k>ar[mid]){
                    start=mid+1;
                }
    }
    // if(flag==0){
    //     cout<<"element not foundin array";
    //     return -1;
    // }
    return -1;
    

}


int main(){
    int ar[7]={10,25,45,50,60,63,77};


    cout<<endl;
    //for searching the integer in array
    cout<<"enter the integer u want to search:-";
    int num;
    cin>>num;
    cout<<BinarySearch(ar,7,num)<<" ";
    
    return 0;
}