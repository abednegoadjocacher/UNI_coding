#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a character to check for vow or consonant : ";
    char ch;
    cin>>ch;
        switch (tolower(ch))
        if (ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
        {
        case 'a':
            cout<<"The character \" " <<ch<< " \" is a vow"<<endl;
            break;
        case 'e':
            cout<<"The character \" " <<ch<< " \" is a vow"<<endl;
            break;
        case 'i':
            cout<<"The character \" " <<ch<< " \" is a vow"<<endl;
            break;
        case 'u':
        cout<<"The character \" " <<ch<< " \" is a vow"<<endl;
            break;
        case 'o':
        cout<<"The character \" " <<ch<< " \" is a vow"<<endl;
            break;
       default:
       cout<<"The character \" " <<ch<< " \" is a consanant"<<endl;
        break;
        }
        }
    return 0;
}