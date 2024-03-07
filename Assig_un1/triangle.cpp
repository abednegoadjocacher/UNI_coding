#include<iostream>
using namespace std;
int main()
{
    int base_length;
    int height;
    int area_tringle = 0;
    cout<<"Enter the base length of the triangle : ";
    cin>>base_length;
    cout<<"Enter the height of the triangle : ";
    cin>>height;
    area_tringle = 1/2 * (base_length * height);
    cout<<"The area of the triangle is : "<<area_tringle<<endl;
    return 0;
}