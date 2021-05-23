/* 
Questions:- 
        https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23      at 25:45
*/

#include<iostream>
using namespace std;

void record_breaker(int a[], int n){
    int previous_max=0;

    for(int i=0;i<n;i++){
        // previous_max = max(previous_max, a[i]);

        if(previous_max< a[i] && ( a[i] > a[i+1]  ) ){
            // if (a[i] > a[i+1]  )
            previous_max = max(previous_max, a[i]);
            cout<<"record breaking day:- "<<a[i]<<endl;
        }
    }


}


int main(){

    int ar[] = {1,2,0,7,2,0,2,9};
    record_breaker(ar, sizeof(ar)/4);
    return 0;
}

/* the output of the code is :- 

record breaking day:- 2
record breaking day:- 7
record breaking day:- 9

*/