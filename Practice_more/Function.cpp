#include<iostream>
using namespace std;
/**
 * I am learning about functions
 * To write my own function ;
 * 1. Provide funtion defintion
 * 2. Provide function prototype
 * 3. Call the function
*/
double cube(double number);  //Function prototype
void helloWord();  //Function prototype
int main()
{
    double Number_cube = cube(2.2);
    cout<<Number_cube<<endl;
    helloWord();  //Function calling
    cout<<"The main function has called the helloWorld function"<<endl;
    return 0;
}
void helloWord()   //Function definition
{
    cout<<"This is my first function to print HELLO WORLD"<<endl;
}
double cube(double number)
{
    return number * number * number;
}