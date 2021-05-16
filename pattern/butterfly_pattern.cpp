#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows:-";
    cin>>row;
    
    for (int i=1;i<=row;i++){
        // left pyramid
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

    return 0;
}


/* output of teh file is this 
                                            enter the number of rows:-5
                                            +         +
                                            ++       ++
                                            +++     +++
                                            ++++   ++++
                                            +++++ +++++
                                            +++++ +++++
                                            ++++   ++++
                                            +++     +++
                                            ++       ++
                                            +         +
*/