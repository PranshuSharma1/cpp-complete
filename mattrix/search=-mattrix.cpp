#include<iostream>
using namespace std;

int main(){
    int mat2[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; // note here mattrix is a sorted martix

    int start=0, end=2;

    cout<<"enter the elemnt u want to search :- ";
    int n; 
    cin >>n;

    for(int i=0;i<4;i++){
        if(n >= mat2[i][start] && n <= mat2[i][end]){
            
            while(start<=end){
                int mid = (start+end)/2;

                if(n == mat2[i][mid]){
                    cout<<"element found at "<<i<<" and "<<mid<<" ";
                    break;
                }
                else 
                    if (n >mat2[i][mid])
                    {
                        start = mid+1;

                    }
                    else
                        if (n < mat2[i][mid])
                        {
                            end = mid-1;
                        }
                        
                    
            }

        }
    }
    return 0;
}