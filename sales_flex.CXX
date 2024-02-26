#include<iostream>
using namespace std;
int main()
{
    /**
     * To calculate and display the amount of ticket sold at stadium
     * There are different division of the stadium
     * Class A
     * Class B
     * Class C
     * The user has to tell the amount for a class
    */
   /*First declaration of variables*/
   /*The user should indicate the price*/
   /*User should enter the number of people*/
   /*Compute the amount of sale for each*/
   /*Display the amount*/

   // Enter the amount for each class
   cout << "How much  is a seat at class A :$";
   int class_a;
   cin >> class_a;
   cout << "How much is a seat for class B :$";
   int class_b;
   cin >> class_b;
   cout << "How much is a seat for class C :$";
   int class_c;
   cin >> class_c;

//To know the number of people for each class 
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
  //The "\n" gives a space between the outputs on the terminal
   cout << "The income for Class A is : $" << income_A << "\n\n\n" << endl;
   cout << "The income for Class B is : $" << income_B << endl << "\n\n";
   cout << "The income for Class C is : $" << income_C << "\n" << endl;

   //Output the total amount earned

   int Total = income_A + income_B + income_C;
   cout << "The total income earn is : $" << Total << endl;
    return 0;
}