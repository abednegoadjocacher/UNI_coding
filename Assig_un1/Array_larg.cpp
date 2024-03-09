#include<iostream>
using namespace std;
int main()
{
    int num , larg;
    cout<<"How many element do you want : ";
    cin>>num;
    cout<<"Enter the elements : ";
    int array[num];
    for(int i = 0; i < num; i++)
    cin>>array[i];
    for(int i = 0; i < num; i++)
    larg = array[0];
    for(int i = 0;i<num;i++)
    {
        if(larg<array[i])
        {
            larg = array[i];
        }
    }
    cout<<"The largest element is "<<larg; 
return 0;
}