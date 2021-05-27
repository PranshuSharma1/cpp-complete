// in thus program the time complexity is o(n^2)

#include<iostream>
using namespace std;

int main(){

    int ar[]={1,-4,3,2,1}; //{-1,4,7,2};
    int n = sizeof(ar)/4;

    int current_sum[n+1];
    int max_sum = INT_MIN;
    current_sum[0] = 0;
    
    for(int i=1;i<=n;i++){

        current_sum[i] = current_sum[i-1] + ar[i];
    }
    // display the value of current_sum array
    for(int i=0;i<n;i++){

        cout<<"the value of current_sum array is :- "<<current_sum[i]<<" ,  "<<endl;;
    }

    for (int i=1;i<n;i++){
        int sum =0;
        for(int j=0;j<i;j++){
            sum = current_sum[i] - ar[j];

            max_sum = max(sum,max_sum);
        }
    }

    cout<<"and the maximum sum is :-"<<max_sum;


    return 0;
}

/* 
the output of the code is :- 
the value of current_sum array is :- 0 ,  
the value of current_sum array is :- -4 ,  
the value of current_sum array is :- -1 ,  
the value of current_sum array is :- 1 ,  
the value of current_sum array is :- 2 ,  
and the maximum sum is :-6%    

*/