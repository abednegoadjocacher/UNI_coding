#include<iostream>
using namespace std;
int main()
{
    //This is to show someone about array summation.
  int arrary[5];
  int sum = 0,average = 0;
  cout <<"Enter five numbers: ";
  for(int i = 0; i < 5; i++)
  {
    
    cin >> arrary[i];
  }
  for (int j =0 ;j < 5; j++)
  {
    sum = sum + arrary[j];
    //cout <<"The sum is : "<<sum<<endl;
  }

   cout <<"The sum is : "<<sum<<endl;
  
  
  
  /*  int num_1;
    int num_2;
    num_2 = 5;
    num_1 = ++num_2;

    cout <<"The value for num_1 = "<<num_1<<endl;
    cout  <<"The value for num_2 = "<<num_2<<endl;
*/
}