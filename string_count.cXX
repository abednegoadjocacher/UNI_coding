#include<iostream>
#include<string>
using namespace std;
int main()
{
    // Count the length of a string
    cout <<"Enter any string : ";
    string input_str;
    while(getline(cin,input_str))
    {
        //auto is used to convert the string to integer
        auto length = input_str.size();//using the size function to count the length of string
        cout <<"The length of the string is : "<<length<<" words"<<endl;
    }

    return 0;
}// Terminate the loop by pressing ctrl+z on windows computer.