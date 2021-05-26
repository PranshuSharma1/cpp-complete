#include<iostream>
using namespace std;


int main(){
    int ar[]={-1,4,7,2};  //{1,4,2,5,6,10,5};
    int n = sizeof(ar)/4;
    cout<<"all the subarrays are :- "<<endl;
    for(int i =0;i<n;i++){
        for (int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<ar[k]<<" , ";
            }
            cout<<endl;
        }
        cout<<endl;
    }


    return 0;
}

/* the output of the code is 

all the subarrays are :- 
-1 , 
-1 , 4 , 
-1 , 4 , 7 , 
-1 , 4 , 7 , 2 , 

4 , 
4 , 7 , 
4 , 7 , 2 , 

7 , 
7 , 2 , 

2 , 

*/