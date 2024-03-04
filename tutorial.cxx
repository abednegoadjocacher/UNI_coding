#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cout<<"enter a string ";
    getline(cin,s);//To read all including white space 
    //cin>>s;
    int cou_nt=0;
    int con_st=0;

    for(int i=0;i<s.length();i++)
    {
        char c = tolower(s[i]);
        if(c =='a'||c =='e'||c =='i'||c =='o'||c =='u')
        {
            cou_nt++;
        }
        else
        con_st++;
        cout<<"text["<<i<<"] = "<< s[i]<<endl;
    }
    cout<<"The vows = "<<cou_nt<<endl;
    cout<<"The cons = "<<con_st<<endl;
}