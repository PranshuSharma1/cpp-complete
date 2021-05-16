#include <iostream>
using namespace std;

int main(){
    int row;
    cout <<"enter number of rows:-";
    cin>>row;
    int num=1;
    for (int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

/* outoput of the file is 
                            enter number of rows:-5
                            1 
                            2 3 
                            4 5 6 
                            7 8 9 10 
                            11 12 13 14 15
*/