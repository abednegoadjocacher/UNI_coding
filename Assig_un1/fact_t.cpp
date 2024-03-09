#include<iostream>
using namespace std;
int main()
{
    int num,factorial = 1;
    cout<<"Enter a number ";
    cin>>num;
    int i = 1;
    while(i <= num)
    {
        factorial *=i;
        i++;
    }
    cout<<factorial<<endl;
    return 0;
}