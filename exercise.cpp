#include<iostream>
using namespace std;
int main()
{
    /**
    * Write a programe to calculate the sum of all even  number from 1 to 20(inclusive)
    */
   //Solution
   /*Algorithm*/
   /*
   1. start
   2. decclare variables
   3. initialize the variable that will store the sum = 0
   4. run the loop
   5. if the variable%2==0
   6. sum += variable
   7. print the sum
   */

  int sum = 0;
  for (int i=1;i<=20;i++)
  {
    if (i%2==0)
    {
        sum+=i;
    }
  }
   cout << "The sum of all the even nubers is :"<< sum <<endl;

  //Trying it on odd numbers

  int odd = 0;
  for(int j=1;j<=15;j++)
  {
    if(j%2!=0)
    { 
    odd = odd+j;
    //cout << "The sum of all the odd numbers is :"<< odd << endl;
    }
    
  }
  cout << "The exact output I want\n";
    cout << "The sum of all the odd numbers is :"<< odd << endl;
  return 0;
}