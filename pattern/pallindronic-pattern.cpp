#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter the value of the rows:-";
    cin>>row;

    for(int i=1;i<=row;i++){
        // for spaces
        for(int s=row-i;s>=0;s--){
            cout<<" ";
        }
        // for descending pattern
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        // for accesding order pattern
        if(i>=2){
            for(int a=2;a<=i;a++){
                cout<<a;
            }
        }
        cout<<endl;

    }
    return 0;
}

/* the output of the code is 
enter the value of the rows:-5
     1
    212
   32123
  4321234
 543212345
/*