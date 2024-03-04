#include<iostream>
using namespace std;
int main()
{
    //find pair of numbers in arrays
    //find the product of the pairs
    //find the sum
    //int arr_data[]={12,3,4,5,6,-9}
    int arr_data[] = {12,3,4,5,6,-9};
    int pro_duct = 0;
    for(int i = 0; i<6; i++)
    {
        for(int j = i+1; j<6; j++)
        {
            pro_duct += arr_data[i] *arr_data[j];
        }
    }
    cout << "the product of arrays is :"<<pro_duct<<endl;
}