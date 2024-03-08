#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter two numbers : ";
    int first_num,second_num,swap;
    cin>>first_num>>second_num;
    cout<<"The numbers before swapping are : "<<first_num<<" "<<"and "<<second_num<<endl;
    swap = first_num;
    first_num = second_num;
    second_num = swap;
    cout<<"----------------After swapping---------------"<<endl<<"\n";
    cout<<"The first number now is the second number : "<<first_num<<endl;
    cout<<"The second number now is the first number : "<<second_num<<endl;
    return 0;
}