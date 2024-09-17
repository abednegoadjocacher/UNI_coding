#include<iostream>
using namespace std;
//Using recursion to find the factorial of a number
//Use Indirect recursive type
//Allow user the user to enter number.
int functionOne (int n);
int functionTwo(int m);
int main()
{
    int Number;
    cout <<"Enter the  number to find the factorial of : ";
    cin >>Number;
    if (Number > 0)
    cout <<functionOne(Number)<<endl;
    else 
    cout << " Can't find the factorial of a negative number '"<< Number <<"'"<<endl;
}
int functionOne(int n)
{
    if (n <= 1)
    return 1;
    else
    return n * functionTwo(n - 1);
}
int functionTwo(int m)
{
    if (m <= 1)
    return 1;
    else
    return m * functionOne(m - 1);
}