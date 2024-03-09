#include<iostream>
using namespace std;
int main()
{
    int prime, num, count;
    cout<<"Enter any number of choice : ";
    cin>>num;
    for(count = 2;count < num; count++)
    {
        if(num % count == 0)
        {
            prime = 0;
            break;
        }
    }
        if(prime)
        cout<<num<<" Is prime"<<endl;
        else
        cout<<num<<" Is not prime"<<endl;

    return 0;
}