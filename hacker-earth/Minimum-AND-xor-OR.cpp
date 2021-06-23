#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int t;
    cin >>t;

    for(int x=0;x<t;x++){

        int n;
        cin >>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }

        // the code logic
        int temp_min;
        int min_int=INT16_MAX;
        int i=0;
        sort(ar,ar+n);
        for(int j=i+1;j<n;j++){
            
            temp_min=( ar[i] & ar[j] ) ^ (ar[i] | ar[j]);
            // cout<<"the temp min for the "<<ar[i]<<" and "<<ar[j]<<" is :- "<<temp_min<<endl;
            if(temp_min<min_int){
                min_int=temp_min;
                // cout<<"we are inside the if statement :- "<<min_int<<endl;
            }

            if(j==n-1){
                // cout<<"we are inside the if :- "<<i<<" and "<<j;
                i++;
                j=i;   // as after the next iteration of loop , it will be incremented
            }

        }
        // for(int i=0;i<n;i++){

        //     for(int j=i+1;j<n;j++){

        //         temp_min=( ar[i] & ar[j] ) ^ (ar[i] | ar[j]);
        //         // cout<<"the temp min for the "<<ar[i]<<" and "<<ar[j]<<" is :- "<<temp_min<<endl;
        //         if(temp_min<min_int){
                    
        //             min_int=temp_min;
        //             // cout<<"we are inside the if statement :- "<<min_int<<endl;
        //         }
        //     }
        // }
        cout<<min_int<<endl;

    }


    return 0;
}