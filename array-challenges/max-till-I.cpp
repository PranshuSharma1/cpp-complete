/*
Question:- given an array a[] of size n. For every i from 0 to n-1 output max(a[0],a[1],a[2].......a[i])

like the maximum of all the prefix elements

example:- 
    ar=[1,0,5,4,6,8]

    so max till i will be :-  1 1 5 5 6 8



*/


#include<iostream>
using namespace std;

// // with the below loop the time complexity will be n square. n^2
// void max_till_i(int ar[], int n){

//     for(int i=0;i<n;i++){
//         int max = ar[i];
//         for(int j=i;j>=0;j--){
            
//             if(max<ar[j]){
//                 max = ar[j]; 
//             }

//         } 
//         cout<<"for element "<<i<<"max till I i is:-"<<max<<" "<<endl; 
//     }

// }

// now we a better solution 
// as this fucntion below has a time complexity of n
void max_till_i(int ar[], int n){
    int mx = -100000;
    for(int i=0;i<n;i++){
        mx = max(mx, ar[i]);    
        cout<<"for element "<<i<<"max till I i is:-"<<mx<<" "<<endl; 
        
    } 
    


}

int main(){
    int arr[7]={45,80,25,65,151,77,100};

    cout<<"the size of arr is "<<sizeof(arr)/4;
    max_till_i(arr,sizeof(arr)/4);

    return 0;
}

/* the outut of the code is :- 

for element 1max till I i is:-80 
for element 2max till I i is:-80 
for element 3max till I i is:-80 
for element 4max till I i is:-151 
for element 5max till I i is:-151 
for element 6max till I i is:-151 

*/