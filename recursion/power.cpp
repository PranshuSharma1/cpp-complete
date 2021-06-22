#include<iostream>

using namespace std;

int power(int n, int p){
    // int p=1;

    if(p==0){
        return 1;
    }
    p=n*power(n,p-1);

    return p;

}

int main(){

    cout<<power(2,3)<<endl;
    return 0;
}