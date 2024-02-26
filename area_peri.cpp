#include<iostream>
/**
 * To print the area and the perimeter of a rectangle
*/
using namespace std;
int main()
{
    //Declaration of variables
    int lenght;
    int breadth;
    int area;
    cout<<"enter the lenght: "/*<<endl*/;
    cin>>lenght;
    cout<<"enter breadth: "/*<<endl*/;
    cin>>breadth;
    area = lenght * breadth;
    cout<<"The area of the rectangle is "<<area<<endl;
     int perimeter;
    perimeter = 2 * (lenght + breadth);
    cout << "The perimeter of a rectangle is "<< perimeter <<endl;
    return 0;
}