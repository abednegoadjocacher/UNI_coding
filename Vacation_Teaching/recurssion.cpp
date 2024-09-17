#include<iostream>
using namespace std;
void display(int  number);
int main()
{
    //learning recursion with C++ program
    int Num = 4;
    display(7);
	
    return 0;
}
void display(int number)
{
    if (number < 1)
        return;
   
    else
    cout<<number;
    display(number - 1);
    cout<<number<<"\t";

}
