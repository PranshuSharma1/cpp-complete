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

/* the output of the code is :-

1 , 5 , 7 , 9 , 10 , 11 , 
6 , 10 , 12 , 13 , 20 , 21 , 
8 , 25 , 29 , 30 , 32 , 41 , 
15 , 55 , 59 , 63 , 68 , 70 , 
40 , 70 , 79 , 81 , 95 , 105 , 
the spiral order traversal is :- 
1 , 5 , 7 , 9 , 10 , 11 , 21 , 41 , 70 , 105 , 95 , 81 , 79 , 70 , 40 , 15 , 8 , 6 , 
10 , 12 , 13 , 20 , 32 , 68 , 63 , 59 , 55 , 25 , 
29 , 30 , 29 , %      

*/