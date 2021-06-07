#include<iostream>
using namespace std;


void swap(int *a){
    ++*a;
}

int main(){


    int a=20;

    int *ptr;
    ptr=&a;
    // cout<<ptr;
    // cout<<endl;
    // cout<<++*ptr;
    swap(&a);    //swap(*ptr);
    cout<<a;

    return 0;
}
