#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int count=0;
    char name[10] = {'a','b','e','d','\0'};
    for(int i=0; i<=5;i++)
    {
        if (name[i] != '\0')
        count++;
    }
    cout<<"The count "<<count<<endl;
  //  cout<<"The length "<<length;
    int countCharacter = 0;
    int index = 0;
    while(name[index] != '\0')
    {
        countCharacter++;
        index++;
    }
    cout<<"The number of character is : "<<countCharacter<<endl;
    string Fname = "Andy";
    size_t len = Fname.size();
    cout<<"Len "<<len<<endl;
}