#include<iostream>
/**
 * To print the area  of a rectangle.
*/
using namespace std;
int main()
{
    int lenght;
    int breadth;
    int area;
    int perimeter;
    cout<<"enter the lenght: "/*<<endl*/;
    cin>>lenght;
    cout<<"enter breadth: "/*<<endl*/;
    cin>>breadth;
    area = lenght * breadth;
    cout<<"The area of the rectangle is "<<area<<endl;
    return 0;
}