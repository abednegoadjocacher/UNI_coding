#include <iostream>
using namespace std;
int main()
{
    int marks[10];
    cout<<"Enter the elements of your array:  "<<endl;
    
    for(int i= 0; i<=10; i++)
    {
    cin>>marks[i];
    }
    cout<<"Elements of array are:  " <<endl;
    for(int i= 0; i<=10; i++)
    {
    cout << marks[i] <<"\t";
    }
    return 0;   
}
