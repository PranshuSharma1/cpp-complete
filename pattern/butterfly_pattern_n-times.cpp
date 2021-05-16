#include<iostream>
using namespace std;

int main(){
    int row,n;
    cout<<"enter the number of times:-";
    cin>>n;
    for (int z=n;z>0;z--){
        row=n-z;
        for (int i=1;i<=row;i++){
            for (int j=1;j<=i;j++){
                cout<<"+";

            }
            // the space one 
            for(int s=(2*row-2*i);s>=0;s--){
                cout<<" ";
            }
            // right pyramid
            for(int j=1;j<=i;j++){
                cout<<"+";
            }
            cout<<endl;
        }
        // for lower region 
        for (int i=row;i>=1;i--){
            // left  pyramid
            for (int j=1;j<=i;j++){
                cout<<"+";

            }
            // the space one 
            for(int s=(2*row-2*i);s>=0;s--){
                cout<<" ";
            }
            // right  pyramid
            for(int j=1;j<=i;j++){
                cout<<"+";
            }
            
            cout<<endl;
        }
        
    }
        // left pyramid

    return 0;
}