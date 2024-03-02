#include<iostream>
#include<string>
using namespace std;
int main()
{
    //To handle string manipulation
    //use the string keyword and the name of the string
    string name;//this  string name is empty because there is no intiallazation
    string what_name ("What is your name ?");//This stirng is intialize
    string reponse = "ADJOCACHER ABEDNEGO";//Another way to initialze
    name = reponse;//Copyiing reponse to name
    string where = "I come from Volta";
    string stay (5, 'o');
    cout <<name<<endl<<what_name<<endl<<reponse<<endl<<where<<endl<<stay<<endl;
}