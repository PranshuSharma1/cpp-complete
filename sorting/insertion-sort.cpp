#include<iostream>
using namespace std;

void display(int ar[], int n){
    cout<<"the array is :-"<<" ";
    for(int i=0;i<n;i++){
        cout<<ar[i]<<", ";
    }
    cout<<endl;
}

void insert_sort(int ar[], int n){

    for(int i=1;i<n;i++){
        int current = ar[i];
        int j =i-1;
        while(j>=0 && ar[j]>current){
            ar[j+1] = ar[j];
            j--;
            display(ar,n);
        }
        ar[j+1] = current;
        display(ar,n);
    }
    
}



int main(){

    int arr[7]={45,80,25,65,15,77,10};
    // cout<<"the elements of array is:- ";
    // for(int z=0;z<7;z++){
    //     cout<<arr[z]<<" ";
    // }
    cout<<endl;
    insert_sort(arr, 7);

    return 0;
}

/* the output of the code is :- 
the array is :- 45, 80, 25, 65, 15, 77, 10, 
the array is :- 45, 80, 80, 65, 15, 77, 10, 
the array is :- 45, 45, 80, 65, 15, 77, 10, 
the array is :- 25, 45, 80, 65, 15, 77, 10, 
the array is :- 25, 45, 80, 80, 15, 77, 10, 
the array is :- 25, 45, 65, 80, 15, 77, 10, 
the array is :- 25, 45, 65, 80, 80, 77, 10, 
the array is :- 25, 45, 65, 65, 80, 77, 10, 
the array is :- 25, 45, 45, 65, 80, 77, 10, 
the array is :- 25, 25, 45, 65, 80, 77, 10, 
the array is :- 15, 25, 45, 65, 80, 77, 10, 
the array is :- 15, 25, 45, 65, 80, 80, 10, 
the array is :- 15, 25, 45, 65, 77, 80, 10, 
the array is :- 15, 25, 45, 65, 77, 80, 80, 
the array is :- 15, 25, 45, 65, 77, 77, 80, 
the array is :- 15, 25, 45, 65, 65, 77, 80, 
the array is :- 15, 25, 45, 45, 65, 77, 80, 
the array is :- 15, 25, 25, 45, 65, 77, 80, 
the array is :- 15, 15, 25, 45, 65, 77, 80, 
the array is :- 10, 15, 25, 45, 65, 77, 80, 

*/

// these are the complete iterations of the loop just to understand the insertion sort

//IDEA :-
//      take an element from the unsorted array , place it in its corresponding position in its sorted part , and shift the elements accordingly