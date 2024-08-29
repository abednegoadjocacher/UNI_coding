#include<iostream>
using namespace std;
int main()
{
    //Using switch to check for a vow.
    //Vow :a,i,o,u,e
    char checkVow;
    cout <<"Enter a character :";
    cin>>checkVow;
    switch (checkVow)
    {
    case 'a':
        cout <<"The character "<<checkVow<<" is a vow"<<"\n";
        //break;
    case 'i':
        cout<<"The character "<<checkVow<<" is a vow"<<"\n";
       // break;
    case 'e':
        cout<<"The character "<<checkVow<<" is a vow"<<"\n";
       // break;
    case 'o':
    cout<<"The character "<<checkVow<<" is a vow"<<"\n";
       // break;
    case 'u':
    cout<<"The character "<<checkVow<<" is a vow"<<"\n";
       // break;
    
    default:
    cout<<"The charater "<<checkVow<<" is not a vow"<<"\n";
        break;
    }
}