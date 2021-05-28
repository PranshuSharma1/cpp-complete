/*
the questions is from the youtube video :- 
    https://www.youtube.com/watch?v=0JYgnhnZFcE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=25   at 20:27

*/
#include<iostream>
using namespace std;
int kadane_algo (int ar[], int n){
    int sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        sum =max(0,(sum + ar[i]));

        max_sum= max(max_sum, sum);

    }
    return max_sum;
}
// int kadane(int ar[],int n) {
//     int sum=0;
//     int max_sum=INT_MIN;
//     for(int i=0;i<n;i++){
//         sum =max(0,(sum + ar[i]));

//         max_sum= max(max_sum, sum);

//     }
//     return max_sum;

// }


// max sub array  =  Total_sum_of_array  - Sum_of_non-contributing-elements
int main(){
    int ar[] = {4,-4,6,-6,10,-11,12};
    int n=sizeof(ar)/4;

    int wrapped_sum , unwrapped_sum;

    unwrapped_sum = kadane_algo(ar,n);

    int total_sum=0;
    
    for(int i=0;i<n;i++){
        total_sum+= ar[i];
        ar[i]=-ar[i];
    }

    wrapped_sum  = total_sum - (-kadane_algo(ar,n)); // here in kadane algo the inverted sign array will be passed as we have changed the sign of it.

    cout<<"wrapped_sum is :- "<<wrapped_sum<<endl;

    cout<<"UNwrapped_sum is :- "<<unwrapped_sum<<endl;

    cout<<"Maximum sum is :- "<<max(wrapped_sum, unwrapped_sum)<<endl;

    return 0;
}

/* the output of the code is 

wrapped_sum is :- 22
UNwrapped_sum is :- 12
Maximum sum is :- 22

*/