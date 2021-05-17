#include<iostream>

using namespace std;

int main(){
    int row;
    cout<<"enter the number od rows:-";
    cin>>row;

    for(int i=row;i>0;i--){
        //for prting the spaces
        for(int s=i-1;s>=0;s--){
            cout<<" ";
        }
        //for making the rhombus
        for (int j=0;j<=row;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}

/* the output of the code is 
enter the number od rows:-5
     * * * * * * 
    * * * * * * 
   * * * * * * 
  * * * * * * 
 * * * * * * 
*/