#include<iostream>
using namespace std;
int main()
{
    /**
     * A nested if to check grade mark
     * The user should enter the mark
    */
   cout << "Enter your score" << endl;
   int mark;
   cin >> mark;
   if(mark >=80)
   {
        cout<<"Your grade is A\n";

        if(mark >= 70)
        {
            cout<<"Your grade is B\n";
        
         if(mark >= 60)
            {
            cout<<"Your grade is C\n";
            }
        }
    }
        else
        cout<<"You failed\n";
   return 0;
}