#include<iostream>
#include<cctype>
using namespace std;
int Vow(string str);
int main()
{
int Vow= Vow("hello");
return 0;
}


int Vow(string str)
{
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
    return (Vow) ;
}