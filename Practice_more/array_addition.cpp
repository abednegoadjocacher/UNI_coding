#include<iostream>
using namespace std;
int main()
{
    //Addition of 1D arrays
    int arr_1[5]={0,1,2,3,4};
    int arr_2[5]={5,6,7,8,9};
    int sum[5] = {0};//Whether you assign it to zero or not ,the output  is same
    //Read the arrays one by one
    for(int i=0; i<5; i++)
    {
        cout<< "First array "<<arr_1[i]<<endl<<" + "<<endl<<"Second array "<<arr_2[i]<<endl;
    }
    for(int i = 0; i < 5; i++)
    {
        sum[i] = arr_1[i] + arr_2[i]; 
    }
    cout<<endl;
    //To read the sum
    for(int i = 0; i < 5; i++)
    {
        cout<<sum[i]<<"\t";
    }
    return 0;
}