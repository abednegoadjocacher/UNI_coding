#include<iostream>
using namespace std;
int main()
{
    /**
     * To calculate and display the amount of ticket sold at stadium
     * There are different division of the stadium
     * Class A = $15
     * Class B = $12
     * Class C = $9
    */
   /*First declaration of variables*/
   /*User should enter the number of people*/
   /*Compute the amount of sale for each*/
   /*Display the amount*/

   //The amount for each class
   int class_a = 15;
   int class_b = 12;
   int class_c = 9;

   cout << "Enter the number for Class A" << endl;
   int Seat_A;
   cin >> Seat_A;
   cout << "Enter the number for Class B" << endl;
   int Seat_B;
   cin >> Seat_B;
   cout << "Enter the number for Class C"   << endl;
   int Seat_C;
   cin  >> Seat_C;
   //this is where you perform the computation
   int income_A = Seat_A * class_a;
   int income_B = Seat_B * class_b;
   int income_C = Seat_C * class_c;

   //Output of the sales of classes

   cout << "The income for Class A is : $" << income_A << endl;
   cout << "The income for Class B is : $" << income_B << endl;
   cout << "The income for Class C is : $" << income_C << endl;

   //Output the total amount earned

   int Total = income_A + income_B + income_C;
   cout << "The total income earn is : $" << Total << endl;
    return 0;
}

