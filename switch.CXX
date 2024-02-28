#include<iostream>
using namespace std;
int main()
{
    //Some simple implementation of switch cases
    char ch;
    cout<<"Enter a character\n";
    cin>>ch;
    switch (ch+1)
    {
    case 'a':
        cout << "You entered a";
        break;
    case 'b':
    cout<<"You enterd b";
    break;
    default :
    cout <<"Invalid character";
        break;
    }
    return 0;
}