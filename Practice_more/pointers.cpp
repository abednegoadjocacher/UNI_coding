#include<iostream>
using namespace std;
/**
 * Learning about Pointers
 * Pointers are used to store addresses of other variables
 * Pointers must store addresses of variables with the same data type
 * 
 */
int main()
{
    int number = 849;
    int *pointerToNumber;
    pointerToNumber = &number;
    //To print the addresses
    cout<<"The address of number is : "<<pointerToNumber<<endl;
    cout<<"The address of number with pointer is : "<<&number<<endl;
    cout<<"The addresss of the pointer variable is : "<<&pointerToNumber<<endl;

    //To access the value stored in the pointer
    cout<<"The value store in the pointer is : "<<*pointerToNumber<<endl;//Dereferencing the pointer
    cout<<"the value in number is : "<<*(&number)<<endl;

    //A pointer to a pointer(double pointer)
    int** pointerTo_ptr;
    pointerTo_ptr = &pointerToNumber;
    cout<<"The second pointer : "<<pointerTo_ptr<<endl;
    cout<<"The pointer two stores : "<<**pointerTo_ptr<<endl;

    //How to use void pointer
    void *vp;
    vp = &number;
    cout<<"The address of number using vp is : "<<vp<<endl;
    cout<<"The value of vp is : "<<*(int*)vp<<endl;

    return 0;  
}