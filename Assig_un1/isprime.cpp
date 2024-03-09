#include<iostream>
using namespace std;
int main()
{
    int i = 0;
    int prime;
    cout<<"Enter any number of choice : ";
    cin>>prime;
    if (prime % i == 0)
    {
    for ( i = 2; /*(i * i)*/i <= (prime/2); i++)
    
    
    cout<<"The number "<<prime<<" is not a prime number"<<endl;
    }
    else
    cout<<"The number "<<prime<<" is a prime"<<endl;

    return 0;
}