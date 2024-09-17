#include<iostream>
using namespace std;
//How to dynamically allocate memory
//How to used the "new" operator to dynamically allocate memory.
//How to use the "delete" operator to free memory.
//The new operator returns the address of a variable.
int main()
{
    int *pointerTo_array;
    int size;
    cout<<"enter size of array: "<<endl;
    cin>>size;
    pointerTo_array = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin>>pointerTo_array[i];
    }
    //To print the elements
      cout<<"The elements are : ";
    for(int i = 0; i < size; i++)
    {
      cout<<pointerTo_array[i]<<"\t";
    }

    delete[] pointerTo_array;

    return 0;
}