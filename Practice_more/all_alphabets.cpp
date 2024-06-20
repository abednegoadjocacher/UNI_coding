#include<iostream>
using namespace std;
int main()
{
/**
 * A program to print all the alphabets
 * I used a for loop.
*/
cout<<"\n\n";
char space = ' ';
cout<<"The ASCII value of space is "<<int(space)<<endl;
cout<<"Letters in Lower case"<<"\n";
cout<<" ___________________________________________ "<<endl <<"\n";
for(char lowercaps = 'a'; lowercaps <= 'z'; lowercaps++)
{
//cout<<alpha<<endl;
cout<<"The ASCII value of the alphabet "<<lowercaps<<" is "<<int(lowercaps)<<"\n";
}
cout<<"\n\n";
cout<<"Letters in Upper case"<<"\n";
cout<<" ___________________________________________ "<<endl <<"\n";
for(char uppercaps = 'A'; uppercaps <= 'Z'; uppercaps++)
cout<<"The ASCII value of upper case letter "<<uppercaps<<" is "<<int(uppercaps)<<"\n";
return 0;
}