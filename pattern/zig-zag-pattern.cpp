#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of elements for the zig-zag pattern:-";
    cin>>row;
    
    for(int i=1;i<=3;i++){
        for(int j =1;j<=row;j++){
            if((i+j)%4==0|| (i==2 && j%4==0)){
                cout<<"*"<<" ";
            }
            else    
                cout<<"  ";
        }
        cout<<endl;
    }


    return 0;
}

/* the output of the code is 

enter the number of elements for the zig-zag pattern:-9
    *       *     
  *   *   *   *   
*       *       * 

*/

//BTW this is a tricky question 