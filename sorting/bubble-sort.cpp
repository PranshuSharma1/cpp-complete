// repeatedly swap  two adjacent elements if they are in wrong order
#include<iostream>
using namespace std;

void bubblesort(int ar[], int s){

    for(int i=0;i<s;i++){
        int temp;
        for(int j=0;j<s-i-1;j++){
            if(ar[j]>ar[j+1]){
                temp = ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
                // ar[j] = ar[j] + ar[j+1];
                // ar[j+1] = ar[j] - ar[j+1];
                // ar[j] = ar[j] - ar[j+1];
            }
        // cout<<endl;
        }
        cout<<"the UNsorted array is:- ";
        for(int z=0;z<s;z++){
            cout<<ar[z]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    cout<<"the finnaly sorted array is:- ";
        for(int z=0;z<s;z++){
            cout<<ar[z]<<" ";
        }
        // cout<<endl;
}

int main(){

    int arr[7]={45,80,25,65,15,77,10};
    // cout<<"the elements of array is:- ";
    // for(int z=0;z<7;z++){
    //     cout<<arr[z]<<" ";
    // }
    cout<<endl;
    bubblesort(arr, 7);
    return 0;
}

/* the output of the code is :- 

the UNsorted array is:- 45 25 65 15 77 10 80 
the UNsorted array is:- 25 45 15 65 10 77 80 
the UNsorted array is:- 25 15 45 10 65 77 80 
the UNsorted array is:- 15 25 10 45 65 77 80 
the UNsorted array is:- 15 10 25 45 65 77 80 
the UNsorted array is:- 10 15 25 45 65 77 80 
the UNsorted array is:- 10 15 25 45 65 77 80 

the finnaly sorted array is:- 10 15 25 45 65 77 80 

*/