#include<iostream>
using namespace std;
int main()
{
    int natural_num, sum = 0;
    cout<<"Enter any number starting from 1 : ";
    cin>>natural_num;
    for(int i = 1; i <= natural_num; i++)
    sum += i;
    cout<<"The sum of all the natural numbers from 1 to "<<natural_num<<" is : "<<sum<<endl;
    return 0;
}