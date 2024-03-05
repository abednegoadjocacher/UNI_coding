#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter a number : ";
    int num;
    cin >> num;
    int fact = 0;
    for(int i = num;i < 0; num++)
    fact *=(--num);
    cout<<"The factorial of the number is : "<<fact<<endl;
    return 0;
}