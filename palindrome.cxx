#include<iostream>
using namespace std;
int main()
{
    /**
     * Ask user to enter string
     * Accept string entered by user
     * Calculate the length of string
     * Run a loop to iterate the string
     * Compare string characters
     * print out "Is palindrome "or "Not palindrome " when strings are successfully checked
    */
   string str;
   cout << "Enter a string : ";
   cin >> str;
   for(int i = 0;i < str.length()/2;i++)
   
    if (str[i] == str[str.length()-i-1])
    
   cout << "The string is a Palindrome : "<<str<<endl;
    
   else
   cout << "The string is Not a Palindrome : "<<str<<endl;
    
    return 0;
}