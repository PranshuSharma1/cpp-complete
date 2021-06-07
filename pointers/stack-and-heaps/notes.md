stack memory :- where system can allocate the memory, the size of stack is always fixed.

                also if we run out of stack memory , it is called stack-overflow


the heap is a dynamic memory allocator, where we have to manually allocate memory and delete memmory bu our self.

    if we do not delete the heap memory by ourself, the system will go to memory leak , as the memory is full
    we can also update the size of the heap varible at runtime , or before compilation
    for example:-

#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *p;
    *p=new int();     // the dynamic memory allocated in Heap

    *p=10;             // this will refering to the varible in HEAP, whose value is initialized by 10.
                        // as our pointer is pointing to the variable in heap,     so we can address this heap variable as lon as we have the address of this HEAP variable


    delete(p);      // this deleted the memory allocated in heap  , we are deallocating the memory from HEAP
                    // but the pointer will be there , poiting to nothing so its called DANGLING POINTER

    p= new int[4];    // memory is allocated for an array in HEAP of size 4
                        // and our pointer "p" is pointing to the index 0 of that array

    delete[]p;          // delete the HEAP array varible , which is pointed by the pointer p
                        // and if we dont delete / deallocate the memory in HEAP , this will conclude to memory LEAK
    p=NULL;             // the value of pointer p is given as NULL
    return 0;
}