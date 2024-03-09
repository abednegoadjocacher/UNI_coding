#include<iostream>
using namespace std;
int main()
{
    int num, temp;
    cout<<"How many element do you want  : ";
    cin>>num;

    cout<<"Enter the elements : ";
    int array[num];
    for(int i = 0; i < num; i++)
    cin>>array[i];

    cout<<"---------The array elements are------------- : ";
    for(int i = 0; i < num; i++)
    {
   cout<<array[i]<<"\t";
    }
   cout<<endl;
    for(int i = 0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
        if(array[j]<array[i])
        {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        }
        }
    }
    cout<<"-------The sorted element are--------------- : ";
    for(int i = 0; i < num; i++)
    {
    cout<<array[i]<<"\t";
    }
    return 0;
}