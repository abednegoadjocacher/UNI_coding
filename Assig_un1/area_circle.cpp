#include<iostream>
using namespace std;
int main()
{
    float radius;
    float area_of_circle = 0;
    cout<<"Enter the radius of the cirle : ";
    cin>> radius;
    area_of_circle = 3.142 * radius * radius;
    cout <<"The area of a circle is : "<<area_of_circle<<endl;
    return 0;
}