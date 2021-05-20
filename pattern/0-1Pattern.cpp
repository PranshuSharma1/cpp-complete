#include<iostream>

using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows:-";
    cin>>row;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            // cout<<j;
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else
                cout<<"0"<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/* the output of the code is 

enter the number of rows5
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

*/
//asad
