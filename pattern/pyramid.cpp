#include<iostream>
using namespace std;

int main(){
    int row;
    cout <<"enter the value for the number of rows:-";
    cin >>row;
    
    for(int i=0;i<row;i++){
        // int space = row-i-1, pattern=i+1
        for(int j=1;j<=row;j++){
            if(j<row-i){
                cout<<" ";
            }
            else
                cout<<"+";
            // cout<<" ";
        }
        
        
        cout<<"\n";
    }

    return 0;
}

/* the output of the file is 
                    enter the value for the number of rows:-5
    +
   ++
  +++
 ++++
+++++
*/