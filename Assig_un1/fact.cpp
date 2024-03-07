#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter a number : ";
    int num;
    cin >> num;
    int factorial = 1;
   if (num < 0) // To chcek for a negative input
   cout<<"Can't find the factorial of a  negative number "<<num<<"!"<<endl;
   else if(num <= 1) // To check if input is '1' or '0'
   cout<<"The factorial of the number  "<<num<<"! "<<" is 1"<<endl;
   else
   {
   for(int read=num; read>=2; read--)
    factorial = factorial *  read;
    cout<<"The factorial of the number is : "<<factorial<<endl;
   }
    return 0;
}