#include <iostream>
using namespace std;
int main()
{
    //Adding two Arrays to get a third array
    //The array size must be know 
    //The user should enter the array
    int arr_1[6];
    int arr_2[6];
    int arr_3[6];
    int i;//It will be used for my  loop
    cout<<"The your array of number :\n";
    for(i=0;i<=5;i++)
    {
    cin>>arr_1[i];
    }
    cout<<"The your array of number for 2 :\n";
    for(i=0;i<=5;i++)
    {
    cin>>arr_2[i];
    }
 //   cout<<"The your array of number for 3:\n";
    for(i=0;i<=5;i++)
    {
        arr_3[i]=arr_1[i]+arr_2[i];
        cout<<"The sum of arrays is "<<i<<" At index  ="<<arr_3[i]<<endl<<"\n\n";
    }
    cout <<"-----------------second display using another loop---------------------------\n\n\n";
    for (i=0;i<=5;i++)
    {
        cout<<"The sum of arrays is "<<i<<" At index is "<<arr_3[i]<<endl;
    }
    

    return 0;
}