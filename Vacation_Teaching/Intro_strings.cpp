#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
  /**
     * String declaration, Intiallization
     * Read, print to the screen a string
     * String compare, concatenate, reverse
     * String length
     * To STD library to read string
     */

int main()
{
    string str = "Hello";
    string str1 = "World";
    str.append(" ABED");//to append a string
    cout<<str<<" "+ str1<<endl;
    char  c = str.at(4);
    cout<<"c is "<<c<<endl;
    cout<<str<<endl;
    char Name[11] = "ADJOCACHER";//String declaration using array of character
    string name = "ABED NEGO";//string declaration using the keyword
    cout<<name<<"\t"<<Name; 
    size_t length = name.size();
    cout<<"The length is : "<<length<<endl;
    string Lname;
    getline(cin,Lname);//To read entire string including space character
    cout<<Lname;  
}