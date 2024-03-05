#include<iostream>
using namespace std;
int main()
{
    cout <<"Enter two nums : ";
    int a,b,c;
    cin>>a>>b;
    cout<<"the values before swap : "<<a<<"\t"<<b<<"\t"<<endl;
    c = a;
    a = b;
    b = c;
    cout<<"A is "<<a<<endl;
    cout<<"B is "<<b<<endl;
    return 0;
}