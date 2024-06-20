#include<iostream>
using namespace std;
/**
 * continuing my lesson on functions
 * simple functions to perform math caculation
 * 1. A function to add two numbers
 * 2. A function to multiply two numbers
*/
int add_number(int m, int n); //function prototype
int multiply(int a, int b);  //function prototype
int main()
{
    int sum , product;
    sum = 0;
    product = 0;
    sum = add_number(67, 33);
    cout<<"The add_number function results is "<<sum<<endl;
    product = multiply(67, 33);
    cout<<"The multiply function result is "<<product<<endl;
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