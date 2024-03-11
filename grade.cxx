#include<iostream>
using namespace std;
int main()
{

    /**
     * To check a grade point
     * Accept user input 
     * Check for the condition
    */
    float mark;
    cout <<"Enter a mark :";
    cin>> mark;
    if(mark >= 80 && mark <= 100)
    cout<<"Your grade is A\n";
    else  if(mark >= 70 && mark <= 79)
    cout<<"Your  grade is B\n";
    else if(mark >= 60 && mark <= 69)
    cout<<"Your grade is C\n";
    else if (mark >= 50 && mark <= 59)
    cout <<"Your grade is D\n";
    else
    cout <<"You failed !!!\n";
    return 0;
}