//find the minimum elements in unsorted array and swap it with element at begining

#include<iostream>
using namespace std;


// the arrray will be divided by the 2 arrays , one sorted and one unsorted
void selsort(int ar[], int s){

    int min, flag, index;
    for(int i=0;i<s-1;i++){
        min=ar[i];
        flag=0;
        for(int j=i+1;j<s;j++){
            if(min>ar[j]){
                flag=1;
                min=ar[j];
                index=j;
            }

        }
        if(flag==1){
            ar[i]= ar[i] + ar[index];
            ar[index] = ar[i] - ar[index];
            ar[i]= ar[i] - ar[index];
             
        }

        for(int z=0; z<s;z++){
            cout<<ar[z]<<" ";
        }
        cout<<endl;
    
    }
    
    
}




int main(){
    int arr[7]={45,80,25,65,15,77,10};

    selsort(arr, 7);
    return 0;
}


// as u can see the sorted array get inn the front and the unsorted array is at behind

// the ourput pof the code is :- 
/* 10 80 25 65 15 77 45 
10 15 25 65 80 77 45 
10 15 25 65 80 77 45 
10 15 25 45 80 77 65 
10 15 25 45 65 77 80 
10 15 25 45 65 77 80 

*/