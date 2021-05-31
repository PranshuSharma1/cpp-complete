#include<iostream>
using namespace std;

int main(){


    // int n,m,p;
    // cout<<"enter the number of rows i.e n:- ";
    // cin>>n;
    // cout<<"enter the number of column i.e m:- ";
    // cin>>m;
    // cout<<"enter the number of column for seconf mattrix i.e p:- ";
    // cin>>p;
    int mat1[3][4] = {{2,4,1,2},{8,4,3,6},{1,7,9,5}}; 
    int mat2[4][3] = {{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
     int n=3, m=4,p=3;
    // input the first mattrix  natrix
    cout<<"enter the elements of the first mattrix :- "<<endl;

    // mat1[][]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};

    // mat2={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    // for(int i=0;i<n;i++){

    //     for (int j =0; j< m;j++){
    //         cout<<"enter the elements of mattrix at position  row "<<i<<" and columnn "<<j<<" :- ";

    //         cin>>mat1[i][j];
    //     }
    //     cout<<endl<<endl;
    // }
    // // input the second mattrix  
    // cout<<"enter the elements of the second mattrix :- "<<endl;

    // for(int i=0;i<m;i++){

    //     for (int j =0; j< p;j++){
    //         cout<<"enter the elements of mattrix at position  row "<<i<<" and columnn "<<j<<" :- ";

    //         cin>>mat2[i][j];
    //     }
    //     cout<<endl<<endl;
    // }


    // display the  first matrix
    cout<<"the elements of mattrix 1 is :-"<<endl;
    for(int i=0;i<n;i++){

        for (int j =0;j<m;j++){
            // cout<<"the element of mattrix at position  row "<<i<<" and columnn "<<j;

            cout<<mat1[i][j]<<" , ";
        }
        cout<<endl;
    }

    
    // display the  second matrix
    cout<<"the elements of mattrix 2 is :-"<<endl;
    for(int i=0;i<m;i++){

        for (int j =0;j<p;j++){
            // cout<<"the element of mattrix at position  row "<<i<<" and columnn "<<j;

            cout<<mat2[i][j]<<" , ";
        }
        cout<<endl;
    }


    cout<<endl<<endl;
    cout<<"the multiplication of mattrix mat1 and mat2:- "<<endl;
    // multiplication of the matrix is 
    int mat_mul[n][p];
    // for(int i=0;i<n;i++){
    //     int temp_mul_sum=0;

    //     for(int j =0;j<p;j++){
    //         int col=j;

    //         for(int z=0;z<m && col<m ;z++){
    //             cout<<mat2[j][z]<<" , ";
    //         }
    //         cout<<endl;
    //     }
    // }

    // initialize the matrix 
    for(int i=0;i<n;i++){

        for (int j =0; j< p; j++){
            // cout<<"enter the elements of mattrix at position  row "<<i<<" and columnn "<<j<<" :- ";

            mat_mul[i][j]=0;
        }
        // cout<<endl<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            for(int z=0;z<m; z++){

                mat_mul[i][j] +=mat1[i][z] * mat2[z][j]; 
                // cout<<mat2[z][j]<<" , ";
            }
            // cout<<endl;  
        }

    }

    // display the  multiplied matrix
    cout<<"the elements of multiplied mattrix  is :-"<<endl;
    for(int i=0;i<n;i++){

        for (int j =0;j<p;j++){
            // cout<<"the element of mattrix at position  row "<<i<<" and columnn "<<j;

            cout<<mat_mul[i][j]<<" , ";
        }
        cout<<endl;
    }


        
    return 0;
}

/* 
the output of the code is :- 

enter the elements of the first mattrix :- 
the elements of mattrix 1 is :-
2 , 4 , 1 , 2 , 
8 , 4 , 3 , 6 , 
1 , 7 , 9 , 5 , 
the elements of mattrix 2 is :-
1 , 2 , 3 , 
4 , 5 , 6 , 
7 , 8 , 9 , 
4 , 5 , 6 , 


the multiplication of mattrix mat1 and mat2:- 
the elements of multiplied mattrix  is :-
33 , 42 , 51 , 
69 , 90 , 111 , 

*/