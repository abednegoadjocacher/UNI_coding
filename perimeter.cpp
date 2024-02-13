#include<iostream>
using namespace std;
int main()
{ /*Another way  of calculating the area of a rectangle*/
   /* int len;
    cout << "enter length: ";
    cin >> len;
    cout << "enter width: ";
    int width;
    cin >> width;
    int area;
    area = len * width;
    cout << "The area is "<< area<<endl;
    */

   // To calculate the perimeter  of a rectangle

    cout << "Enter the length: "<<endl;
    int lenght;
    cin >>  lenght;
    cout << "Enter the width: "<<endl;
    int width;
    cin >> width;
    int perimeter;
    perimeter = 2 * (lenght + width);
    cout << "The perimeter of a rectangle is "<< perimeter <<endl;
    return 0;

}