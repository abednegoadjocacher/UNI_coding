#include<iostream>
using namespace std;
int main()
{
    /**
     * A nested else-if to check grade mark
     * The user should enter the mark
    */
   cout << "Enter your score" << endl;
   int mark;
   cin >> mark;
   if(mark >=80)
cout<<"Your grade is A\n";
    else if(mark >= 70)
cout<<"Your grade is B\n";
    else if(mark >= 60)
cout<<"Your grade is C\n";
    else
cout<<"You failed\n";
   return 0;
}