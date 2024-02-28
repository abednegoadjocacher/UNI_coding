#include<iostream>
using namespace std;
int main()
{
    //A for loop to print numbers
    for(int i = 0; i <= 20; i++)
    {
    cout << i << endl;
    }
    cout<<"The 2nd loop"<<endl;
    //Other ways to write a for loop
    int j;
    for (j=1; j<10; j++)
    cout << j << endl;

    //To run an infinite for loop
   /* cout<<"This loop is infinite\n";
    int k;
    for(;;k++)
    cout<<k<<endl;*/
    //there are more you can do with for loop
    cout<<"more for loop\n";
    int n,m;
    for (/*n=1,m=0*/;/*n<19,*/m<10;n++,m++);//it prints out garbage values
    cout<<n<<m<<endl;
    return 0;
}