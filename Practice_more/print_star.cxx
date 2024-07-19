#include<iostream>
using namespace std;
/**
 * To print stars in this order
 *  *
 *  **
 *  ***
 *  ****
 *  *****
 */
int main()
{
    int number_row = 5;//This is the number of times to row to print
    for(int i=1; i<=number_row; i++)
    {
        for(int j = 1; j<=i; j++)
        {
        cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}