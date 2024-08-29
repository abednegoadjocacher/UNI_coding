#include<iostream>
using namespace std;
int main()
{
    //Using switch to check for a vow.
    //Vow :a,i,o,u,e
    char checkVow;
    cout <<"Enter a character :";
    cin>>checkVow;
    switch (toupper(checkVow))
    {
    case 'A':
    case 'I':
    case 'E':
    case 'O':
    case 'U':
    cout<<"The character "<<checkVow<<" is a vow"<<"\n";
         break;
    
    default:
    cout<<"The charater "<<checkVow<<" is not a vow"<<"\n";
        break;
 }
 return 0;
}
