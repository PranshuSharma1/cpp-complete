/* 
question:-
            https://www.youtube.com/watch?v=eJcBH0xvG98&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=23         at 16:30 mins 
*/

#include<iostream>
using namespace std;
// ar[] = {1,3,7,9,11,12,13,14,15,16,17,18,20,23,24,27,34,56,8,9};
void longest_arth_subarray(int ar[],int n){
    int pd, current_length=0, max_length=0;
    for(int i=0;i<n;i++){   
        pd = ar[i+1] - ar[i];
        cout<<"the pd between "<<ar[i+1]<<" and "<<ar[i]<<" is :- "<<pd<<endl;;
        for(int j=0;j<n;j++){
            
            if (ar[j]+pd == ar[j+1]){
                cout<<"we are getting a arithamtic suarray  between :- "<<ar[j+1]<<" and "<<ar[j]<<endl; 
                current_length++;
                cout<<"the current lenth is :- "<<current_length<<endl;
            }
            // else 
            // else if(ar[j-1] )
            else if (max_length < current_length){
                max_length =current_length;
                cout<<"the max length is :- "<<max_length<<endl;
                current_length = 0;
            }
            else 
                current_length = 0;
 

        }
        // if (max_length < current_length){
        //         max_length =current_length;
        //         cout<<"the max length is :- "<<max_length<<endl;
        // }

    }
    cout<<"max length of the array is:- "<<max_length;

}




int main(){
    // int test,n;
    // cout<<"enter the number of test cases:-";
    // cin>>test;
    // cout<<"enter the number of N;-";
    // cin>>n;

    int ar[] = {1,3,7,9,11,12,13,14,15,16,17,18,20,23,24,27,34,56,8,9};
    longest_arth_subarray(ar, sizeof(ar)/4);
    return 0;
}



/* the output of the code is :- 

the pd between 3 and 1 is :- 2
we are getting a arithamtic suarray  between :- 3 and 1
the current lenth is :- 1
the max length is :- 1
we are getting a arithamtic suarray  between :- 9 and 7
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 11 and 9
the current lenth is :- 2
the max length is :- 2
we are getting a arithamtic suarray  between :- 20 and 18
the current lenth is :- 1
the pd between 7 and 3 is :- 4
we are getting a arithamtic suarray  between :- 7 and 3
the current lenth is :- 1
the pd between 9 and 7 is :- 2
we are getting a arithamtic suarray  between :- 3 and 1
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 7
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 11 and 9
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 20 and 18
the current lenth is :- 1
the pd between 11 and 9 is :- 2
we are getting a arithamtic suarray  between :- 3 and 1
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 7
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 11 and 9
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 20 and 18
the current lenth is :- 1
the pd between 12 and 11 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
the max length is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between 13 and 12 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between 14 and 13 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between 15 and 14 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between 16 and 15 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between 17 and 16 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between 18 and 17 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between 20 and 18 is :- 2
we are getting a arithamtic suarray  between :- 3 and 1
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 7
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 11 and 9
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 20 and 18
the current lenth is :- 1
the pd between 23 and 20 is :- 3
we are getting a arithamtic suarray  between :- 23 and 20
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 27 and 24
the current lenth is :- 1
the pd between 24 and 23 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between 27 and 24 is :- 3
we are getting a arithamtic suarray  between :- 23 and 20
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 27 and 24
the current lenth is :- 1
the pd between 34 and 27 is :- 7
we are getting a arithamtic suarray  between :- 34 and 27
the current lenth is :- 1
the pd between 56 and 34 is :- 22
we are getting a arithamtic suarray  between :- 56 and 34
the current lenth is :- 1
the pd between 8 and 56 is :- -48
we are getting a arithamtic suarray  between :- 8 and 56
the current lenth is :- 1
the pd between 9 and 8 is :- 1
we are getting a arithamtic suarray  between :- 12 and 11
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 13 and 12
the current lenth is :- 2
we are getting a arithamtic suarray  between :- 14 and 13
the current lenth is :- 3
we are getting a arithamtic suarray  between :- 15 and 14
the current lenth is :- 4
we are getting a arithamtic suarray  between :- 16 and 15
the current lenth is :- 5
we are getting a arithamtic suarray  between :- 17 and 16
the current lenth is :- 6
we are getting a arithamtic suarray  between :- 18 and 17
the current lenth is :- 7
we are getting a arithamtic suarray  between :- 24 and 23
the current lenth is :- 1
we are getting a arithamtic suarray  between :- 9 and 8
the current lenth is :- 1
the pd between -352540712 and 9 is :- -352540721
we are getting a arithamtic suarray  between :- -352540712 and 9
the current lenth is :- 1
max length of the array is:- 7%                


*/