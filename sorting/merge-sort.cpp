#include<iostream>

using namespace std;


void Merge(int arr[], int l, int mid, int r){
    // cout<<endl;
    // cout<<"the value from Merge of l is:- "<<l<<endl;
    // cout<<"the value from Merge of mid is:- "<<mid<<endl;
    // cout<<"the value from Merge of r is:- "<<r<<endl;
    // cout<<endl<<endl;

    cout<<" the orignal array arr[] is :- ";
    for (int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1], b[n2];

    for (int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for (int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }

    // cout<<" the first temp array a[] is :- ";
    // for (int i=0;i<n1;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // cout<<" the first temp array b[] is :- ";
    // for (int i=0;i<n2;i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;



    int i=0,j=0,k=l;

    while (i<n1 && j<n2){

        if(a[i]<b[j]){
            arr[k]=a[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=b[j];
            k++;
            j++;
        }
        
    }

    while(i<n1){
        arr[k]=a[i];
        k++;
        i++;
        
    }
    while(j<n2){
        arr[k]=b[j];
        k++;
        j++;
        
    }

}


void MergeSort(int arr[], int l ,int r){
    // cout<<"the value from MergeSort of l is :- "<<l<<endl;
    // cout<<"the value from MergeSort of r is :- "<<r<<endl;
    if(l<r){
        int mid=(l+r)/2;
        // cout<<"the value from MergeSort of mid is :- "<<mid<<endl<<endl;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);

        Merge(arr,l,mid,r);
        
    }

}

int main(){

    int arr[]={4,6,15,2,5,9};

    // cout<<sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr,0,sizeof(arr)/sizeof(arr[0])-1);

    for(int i=0;i<(sizeof(arr)/sizeof(arr[0])) ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

/* 
the output of the code with debugging on is :- 

the value from MergeSort of l is :- 0
the value from MergeSort of r is :- 5
the value from MergeSort of mid is :- 2

the value from MergeSort of l is :- 0
the value from MergeSort of r is :- 2
the value from MergeSort of mid is :- 1

the value from MergeSort of l is :- 0
the value from MergeSort of r is :- 1
the value from MergeSort of mid is :- 0

the value from MergeSort of l is :- 0
the value from MergeSort of r is :- 0
the value from MergeSort of l is :- 1
the value from MergeSort of r is :- 1

the value from Merge of l is:- 0
the value from Merge of mid is:- 0
the value from Merge of r is:- 1


 the orignal array arr[] is :- 4 
 the first temp array a[] is :- 4 
 the first temp array b[] is :- 6 
the value from MergeSort of l is :- 2
the value from MergeSort of r is :- 2

the value from Merge of l is:- 0
the value from Merge of mid is:- 1
the value from Merge of r is:- 2


 the orignal array arr[] is :- 4 6 
 the first temp array a[] is :- 4 6 
 the first temp array b[] is :- 15 
the value from MergeSort of l is :- 3
the value from MergeSort of r is :- 5
the value from MergeSort of mid is :- 4

the value from MergeSort of l is :- 3
the value from MergeSort of r is :- 4
the value from MergeSort of mid is :- 3

the value from MergeSort of l is :- 3
the value from MergeSort of r is :- 3
the value from MergeSort of l is :- 4
the value from MergeSort of r is :- 4

the value from Merge of l is:- 3
the value from Merge of mid is:- 3
the value from Merge of r is:- 4


 the orignal array arr[] is :- 4 6 15 2 
 the first temp array a[] is :- 2 
 the first temp array b[] is :- 5 
the value from MergeSort of l is :- 5
the value from MergeSort of r is :- 5

the value from Merge of l is:- 3
the value from Merge of mid is:- 4
the value from Merge of r is:- 5


 the orignal array arr[] is :- 4 6 15 2 5 
 the first temp array a[] is :- 2 5 
 the first temp array b[] is :- 9 

the value from Merge of l is:- 0
the value from Merge of mid is:- 2
the value from Merge of r is:- 5


 the orignal array arr[] is :- 4 6 15 2 5 
 the first temp array a[] is :- 4 6 15 
 the first temp array b[] is :- 2 5 9 
2 4 5 6 9 15 

*/
