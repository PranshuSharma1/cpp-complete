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

    
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    //display the tarnspose mattrix is :-
    cout<<"display the tarnspose mattrix is :- "<<endl;
    
    for(int i=0;i<n;i++){

        for (int j =0;j<m;j++){
            // cout<<"the element of mattrix at position  row "<<i<<" and columnn "<<j;

            cout<<mat[i][j]<<" , ";
        }
        cout<<endl;
    }


    return 0;
}