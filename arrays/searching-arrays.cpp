#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of elemenst you want in array:-";
    cin >>n;
    int ar[n];

    // inputting the array
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    // outputting the array
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    //for searching the integer in array
    cout<<"enter the integer u want to search:-";
    int num, flag=0;
    cin>>num;

    for(int i=0;i<n;i++){
        if(num==ar[i]){
            cout<<"element "<<num<<"found in array at place"<<i;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"no element found in the array";
    }
    
    return 0;
}