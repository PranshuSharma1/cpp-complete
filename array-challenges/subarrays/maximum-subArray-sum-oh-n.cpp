// in thus program the time complexity is o(n^2)


// this question is based on the kadane's algo , here if we have a sum in -ve integer than we , put the -ve integrer to 0, as the maximum sum is always the sum of positive integrer only

// u can also consult the video https://www.youtube.com/watch?v=0JYgnhnZFcE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=26  at 14:30
#include<iostream>
using namespace std;

int main(){

    int ar[]={1,-4,3,2,1}; //{-1,4,7,2};
    int n = sizeof(ar)/4;

    // int current_sum[n+1];
    int max_sum = INT_MIN;
    int current_sum = 0;
    
    for(int i=0;i<n;i++){

        // current_sum = (current_sum + ar[i]);
        current_sum = max(0,(current_sum + ar[i]));
        // current_sum = max(0,current_sum);
        max_sum = max(current_sum,max_sum);
    }
    // display the value of current_sum array
    // for(int i=0;i<n;i++){

    //     cout<<"the value of current_sum array is :- "<<current_sum<<" ,  "<<endl;;
    // }


    cout<<"and the maximum sum is :-"<<max_sum;


    return 0;
}

/* the output of the code is:- 

and the maximum sum is :-6%   

*/ 