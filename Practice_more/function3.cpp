#include<iostream>
using namespace std;
/**
 * continuing my lesson on functions
 * User must enter the numbers
 * simple functions to perform math caculation
 * 1. A function to add two numbers
 * 2. A function to multiply two numbers
*/
int add_number(int m, int n); //function prototype
int multiply(int a, int b);  //function prototype
int main()
{
    cout<<"Enter two numbers to add and multiply: ";
    int sum , product, Num1, Num2;
    cin>>Num1>>Num2;
    sum = 0;
    product = 0;
    sum = add_number(Num1, Num2);
    cout<<"The sum of the number "<<Num1<< " and "<<Num2<<" is "<<sum<<endl;
    product = multiply(Num1, Num2);
    cout<<"The the product of the number "<<Num1<<" and "<<Num2<<" is "<<product<<endl;
    return 0;
}
int add_number(int m, int n)  //function definiton for addition
{
    return m + n;
}
int multiply(int a, int b) //function definition for multiplication
{
    int mult_number;
    mult_number = a * b;
    return mult_number;
}