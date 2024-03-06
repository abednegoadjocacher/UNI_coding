#include<iostream>
using namespace std;
int main()
{
    cout << "Enter any number of choice : ";
    int even;
    cin >> even;
    if(even < 0)// This condition checks if a number is a negative
    cout << "You entered a negative number : "<<even<<endl;
    else if(even%2 == 0)
    cout << "The number "<<even<<" is even " << endl;
    else
    cout << "The number "<<even<<" is odd " << endl;
    return 0;
}