#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the number of rows i.e n:- ";
    cin>>n;
    cout<<"enter the number of column i.e m:- ";
    cin>>m;
    int mat[n][m];
    // input the natrix
    for(int i=0;i<n;i++){

        for (int j =0; j< m;j++){
            cout<<"enter the elements of mattrix at position  row "<<i<<" and columnn "<<j<<" :- ";

            cin>>mat[i][j];
        }
        cout<<endl<<endl;
    }

    // display the matrix

    for(int i=0;i<n;i++){

        for (int j =0;j<m;j++){
            // cout<<"the element of mattrix at position  row "<<i<<" and columnn "<<j;

            cout<<mat[i][j]<<" , ";
        }
        cout<<endl;
    }


    //display with spiral order traversal 
    cout<<"the spiral order traversal is :- ";
    int row_start=0, row_end =n-1, col_start = 0, col_end = m-1;

    while(row_start<=row_end && col_start <= col_end ){
        cout<<endl;

        //for row start
        for(int col = col_start; col<=col_end;col++){
            cout<<mat[row_start][col]<<" , ";
        }

        row_start++;

        // for column end
        for(int row=row_start;row<=row_end; row++){
            cout<<mat[row][col_end]<<" , ";
        }
        col_end--;
        // for last row
        for(int col = col_end; col>=col_start;col--){
            cout<<mat[row_end][col]<<" , ";
        }

        row_end--;

        // for  column start 
        for(int row=row_end;row>=row_start; row--){
            cout<<mat[row][col_start]<<" , ";
        }
        col_start++;

    }




    return 0;
}