#include<iostream>
using namespace std;
int main()
{
    double celsius;
    double fahrenheit = 0;
    cout<<"Enter the temperature in celsius : ";
    cin>> celsius;
    fahrenheit =((celsius * 5/9) + 32);
    cout <<"The converted temperature in Fahrenheit is : "<<fahrenheit<<endl;
    return 0;
}