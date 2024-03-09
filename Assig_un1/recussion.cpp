#include<iostream>
using namespace std;
int factorial(int n);//function declaration
int main()
{
    int fact, number;
    cout <<" Enter the number to find its factorial : ";
    cin>>number;
    fact = factorial(number);
    cout <<fact;
}
int factorial (int n)
{
    if (n <= 1)
    return 1;
    else
    return n* factorial(n - 1);
}