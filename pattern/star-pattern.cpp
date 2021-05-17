#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows:-";
    cin>>row;

    for(int i=1;i<=row;i++){
        //for space
        for (int s=1;s<=row-i;s++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    // for the downward triangle
    for(int i=row;i>=1;i--){
        //for space
        for (int s=1;s<=row-i;s++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*"<<" ";
        }

        cout<<endl;
    }

    return 0;
}

/* the output of the code is:- 
enter the number of rows:-5
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/