#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows:-";
    cin>>row;

    for (int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}

/* the output of teh file is 
                        enter the number of rows:-5
                        1
                        22
                        333
                        4444
                        55555
                        */