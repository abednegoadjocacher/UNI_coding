#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    //To count Vowels from a string


string str;
int i,vow=0,cons_ant=0;
cout << "enter a string : ";
cin>>str;
for (i =0;i<str.length();i++)
{
    char ch= toupper(str[i]);
    
        if(ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U')
        {
        vow++;
        }
        else
        cons_ant++;
    
    
}
        cout<<"The number of Vowels = "<<vow<<endl; 
        cout<<"The number of consonants = "<<cons_ant<<endl;
          return 0;
}
