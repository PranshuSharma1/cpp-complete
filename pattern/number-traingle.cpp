#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows:-";
    cin>>row;

    for(int i=1;i<=row;i++){
        for(int s=row-i;s>0;s--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/* the output of the code is :-

enter the number of rows:-5
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 

*/