#include<iostream>
using namespace std;
int main()
{
    int base;
    int height;
    int area_triangle = 0;
    cout<<"Enter the base length : ";
    cin>>base;
    cout<<"Enter the height of the triangle : ";
    cin>>height;
    area_triangle = (1/2 * (base * height));
    cout<<"The area of the triangle is : "<<area_triangle<<endl;
    return 0;
}
