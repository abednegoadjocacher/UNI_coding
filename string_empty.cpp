#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Check if a string is empty
    cout << "Input a string : ";
    string input;
    while(getline(cin,input))//The getline function iis used to read the entire line 
    {
        if(!input.empty())//The dot operator is used to execute the input
        {
            cout <<"the string is :";
            cout <<input<<endl;
        }
        else
        cout <<"The string is empty"<<endl;
    }
    return 0;
}