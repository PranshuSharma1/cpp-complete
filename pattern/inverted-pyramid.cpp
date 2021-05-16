#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows for the pyramid:-";
    cin>>row;

    for(int i=0;i<row;i++){
        for(int j=row-1-i;j>=0;j--){
            cout<<"+";
        }
        cout<<"\n";
        
    }

    return 0;
}
/* the output of the file is 
                    enter the number of rows for the pyramid:-5
                    +++++
                    ++++
                    +++
                    ++
                    +
*/