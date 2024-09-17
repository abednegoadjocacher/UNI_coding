#include<iostream>
using namespace std;
//Introduction to structures
//Structure is used to store a group of different datatypes
//Also structure is a user define datatype
//

//How to declare structures
//Write the struct keyword then the nameOfStructure
//Open curly brace and enter your structure variables and close brace
//Then lastly bring semi colon;
//The variables declare are called members

//How To initialize structures
//

struct student
{
    int rollnumber;
    char name[20];
    float marks;
};

int main()
{
    struct student S2;//to ask user to enter
    cout<<"Enter info ";
    cin>>S2.rollnumber;
    cin>>S2.name;
    cin>>S2.marks;
    cout<<"your info is "<<S2.rollnumber<<" "<<S2.name<<" "<<S2.marks<<endl;
    
    struct student S1={4,"abed",78.987};//compile initialization

    //To print to screen
    cout<<"The structure is "<<S1.rollnumber<<" "<<S1.name<<" "<<S1.marks<<endl;
    return 0;
}