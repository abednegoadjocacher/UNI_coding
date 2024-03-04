#include<iostream>
using namespace std;
int main()
{
    /**
     * To find a single element in an array
     * eg int arr[]={1,3,4,3,1,2,2}
    */
   //using XOR operator
   int arr_[]={1,4,3,7,1,4,7};
   int _elem_ = 0;
    for (int i=0; i<7; i++)
    {
        _elem_ ^=arr_[i];
        cout <<_elem_<<endl;
    }
    cout <<"The single element in the array is : "<<_elem_<<endl;
}