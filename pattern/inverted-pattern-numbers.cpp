#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the number of rows:-";
    cin>>row;

    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}

/* the output of the file is 
enter the number of rows:-5
12345
1234
123
12
1

*/