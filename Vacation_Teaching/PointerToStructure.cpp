#include<iostream>
using namespace std;
//Introduction to pointer structures
//How to access structures using pointer
//Use the arrow operator ->.

typedef struct student
{
    char name[5];
    float mark;
    int age;
}student;

int main()
{
    student Number1;
    Number1.name[0] = 'a';
    Number1.name[1] = 'b';
    Number1.name[2] = 'e';
    Number1.name[3] = 'd';
    Number1.name[4] = '\0';
    Number1.mark = 98.867;
    Number1.age = 45;
    cout<<"your name  is "<<Number1.name<<".\n"<<"you score "<<Number1.mark<<" in the  exam."<<" You are "<<Number1.age<<"years old."<<"\n\n"<<endl;

    student (*ptr) = &Number1;
    cout<<"your name  is "<<(*ptr).name<<".\n"<<"you score "<<ptr->mark<<" in the  exam."<<" You are "<<ptr->age<<"years old."<<endl;

}