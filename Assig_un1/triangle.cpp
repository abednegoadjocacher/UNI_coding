#include<iostream>
using namespace std;
int main()
{
    double base, height, A_triangle = 0; 
    cout<<"Enter the base length of the triangle : ";
    cin>>base;
    cout<<"Enter the height of the triangle : ";
    cin>>height;
    A_triangle =  (base * height) * 0.5;
    cout<<"The area of the triangle is : "<<A_triangle<<endl;
    return 0;
}