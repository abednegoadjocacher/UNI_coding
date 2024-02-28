#include<iostream>
using namespace std;
int main()
{
    /*To determine if a number is even*/
    cout << "Enter any number of choice\n";
    int even;
    cin >> even;
    if(even%2 == 0)
    cout << "The number is even " << even << endl << "\n";
    else
    cout << "The number is not even " << even << endl;
}