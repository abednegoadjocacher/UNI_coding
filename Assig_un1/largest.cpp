#include<iostream>
using  namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if (a>b&&a>c&&b)
    cout<<a<<':'<<"is largest"<<endl;
    else if(b>a&&b>c)
    cout<<b<<':'<<"is largest"<<endl;
    else 
    cout <<c<< ": "<<"largest"<<endl;
    return 0;
}

