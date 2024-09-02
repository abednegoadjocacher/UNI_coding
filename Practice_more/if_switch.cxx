#include<iostream>
using namespace std;
#define PI 3.142
/**
 * This is a group work
 * The program is to perform some calculations on specfic 
 * regular shapes like Square, Rectangle, Triangle, Circle etc
 * The program finds the area of the following
 * Also the program askes the user what shape to find the area of.
 * If the user specifies then;
 * Then we read input of the variables from user
 * The user input assumes to be in meters.
 * Finally print the output 
 */
int main()
{
    char decision;
    cout<<"Enter Y to start ";
    cin>>decision;
   // if(toupper(decision)=='Y')
   while(toupper(decision) == 'Y')
    {
    cout << "Enter 'C' to find area of circle, 'S' for square, 'T' for triangle: ";
    char choice;
    cin >> choice;
    switch (toupper(choice))
    {
    case 'C' :
    {
    float radius;
    float areaofcircle = 0;
    cout<<"Enter the radius of the circle: ";
    cin>>radius;
    areaofcircle = PI*radius*radius;
    cout<<"Area of the circle = "<<areaofcircle<<"m2"<<"\n";
        break;
    }
    case 'S':
    {
    int length;
    int areaofsquare = 0;
    cout<<"What is the length of your square ?  ";
    cin>>length;
    areaofsquare = length*length;
    cout<<"Area of square = "<<areaofsquare<<"m2"<<"\n";
       break;
    }
   case 'T':
   {
   float base,height;
   float areaoftriangle = 0;
   cout<<"Enter the base and height of triangle : ";
   cin>>base>>height;
   areaoftriangle = 0.5*base*height;
   cout<<"Area of triangle = "<<areaoftriangle<<"m2"<<"\n";
        break;
    }
    default:
    cout<<"Invalid choice. Thank you.\n";
        break;
    }
    }
    decision++;
    cout<<"Do you want to perfom another calculation ? \nYES/NO \nEnter Y for YES Or N for NO ";
    cin>>decision;
   return 0;
} 