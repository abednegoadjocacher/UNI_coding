#include<iostream>
using namespace std;
int main()
{
    cout<<"enter a character :";
    char ch;
    cin>>ch;
    cout <<"you entered "<<ch<<endl;
    char *memory= &ch;
    cout<<"The address of character is : "<<&ch<<endl;
    char firstName[15] = {'A','B','E','D','N','E','G','O','e','\0','b'};
    cout <<firstName<<"\n\n";
    char lastName[20];
    cout <<"Enter last name : ";
    for(int count = 0; count<10; count++)
    {
        cin>>lastName[count];
    }

    cout<<"\n\n";
    cout <<"Your name  is ";
    for(int pirntname=0; pirntname<10;pirntname++)
    {
        cout<<lastName[pirntname];
    }
}