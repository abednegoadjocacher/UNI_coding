#include<iostream>
using namespace std;
int main()
{
    /**
     * Using do while loop to write a programe that would
     * calculate the sum of all positive number.
     * 
     * Algorithm
     *  1. start 
     *  2.declare varibles
     *  3.check condition if it is true.
     *  4.If true add all the numbers and assign them to sum variable
     *  5.Else if false, break out of the loop and print out the sum .
    */

   //The output is not the exact specificaion I want
 /*  int sum = 0,n;
   do 
   {
        cout<<"Enter a positive integer :";
        cin>>n;
        sum += n;
        cout<<"The sum of all the positive is: "<<sum<<endl;
   }while(n >= 0);
   cout<<"This is out the loop"<<endl;
   */


//This one gave me the output I want

    int n;
    int sum = 0;
   do 
   {
     cout<<"Enter a positive integer :";
     cin>>n;
     sum += n;
   }while(n >= 0);
   cout<<"The sum of all the positive is: "<<sum<<endl<<"\n";
  // cout<<"This is out the loop"<<endl;
   return 0;
}