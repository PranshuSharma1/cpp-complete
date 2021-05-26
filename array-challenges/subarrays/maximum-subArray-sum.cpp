#include<iostream>
using namespace std;


int main(){
    int ar[]={-1,4,7,2};  //{1,4,2,5,6,10,5};
    int n = sizeof(ar)/4;
    int sum =0, max_sum=0;
    cout<<"all the subarrays are :- "<<endl;
    for(int i =0;i<n;i++){
        for (int j=i;j<n;j++){
            sum=0;
            for(int k=i;k<=j;k++){
                // sum=0;
                sum = sum + ar[k];
                // cout<<ar[k]<<" , ";
                // cout<<sum<<endl;
            }
            if(max_sum < sum){
                
                max_sum = sum;
                cout<<"max sum is"<<max_sum<<endl;
            }
            // cout<<endl;
        }
        cout<<endl;
    }

    cout<<"maximum sum is :-"<<max_sum;
    return 0;
}

// -1 , 
// -1 , 4 , 
// -1 , 4 , 7 , 
// -1 , 4 , 7 , 2 , 

// 4 , 
// 4 , 7 , 
// 4 , 7 , 2 , 

// 7 , 
// 7 , 2 , 

// 2 , 
