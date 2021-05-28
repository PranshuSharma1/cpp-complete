/*
the question is present in 
    https://www.youtube.com/watch?v=0JYgnhnZFcE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=25   at   29:00
*/

#include<iostream>
using namespace std;

int main(){

    int ar[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(ar)/4;
    int k = 17;

    int start=0, end=n-1;
    for(int i=0;i<n;i++){               // a better approach would be with while loop :- while(start<end)

        if ((ar[start]+ ar[end])==k){
            cout<<"the indexes are :- "<<start<<" and "<<end<<endl;
            break;
        }
        else
            if ((ar[start]+ ar[end] )< k)
            {
                start++;
            }
            else
                if ((ar[start]+ ar[end] )> k)
                {
                    end--;
                }
                else
                    cout<<"the number "<<k<<" is not present in the array.";            
            

    }

    return 0;
}

/*
the output of the code is :- 

the indexes are :- 6 and 9

*/