#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter a number : ";
    int num;
    cin >> num;
    int fact = 1;
    
   if (num < 0)
   cout<<"Can't find the factorial of a  negative number "<<num<<"!"<<endl;
   else if(num <= 1)
   cout<<"The factorial of the number  "<<num<<"! "<<"is 1"<<endl;
   else
   {
   for(int i=1; i<=num; i++)
   {
    fact = fact *  i;
   }
    cout<<"The factorial of the number is : "<<fact<<endl;
   
   }
    return 0;
}