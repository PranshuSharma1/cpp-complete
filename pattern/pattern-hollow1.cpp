#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout<<"input the value of the row and column to create hollow rectanngle:- \n enter value of ROW:- ";
    cin>>row;
    cout<<"enter value for column:-";
    cin>>col;
    // print the loop for the rectangle //
    for (int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            // if (i!=0 || i!=row-1){
            //     cout<<"the value of i is:-"<<i;
            //     if (j==0| j==col-1){
            //         cout<<"*";
            //     }
            //     else
            //         cout<<" ";
            //         // continue;
            // }
            if (i==0 || i==row-1){
                    cout<<"*";
                
            }
            else{
                if (j==0| j==col-1){
                    cout<<"*";
                }
                else
                    cout<<" ";
                    // continue;
                
            }

                
                
        }
        cout<<"\n";
    }
    

    return 0;
}
/* the output of the file is 
                    enter value of ROW:- 5
                    enter value for column:-9
                    *********
                    *       *
                    *       *
                    *       *
                    *********
*/