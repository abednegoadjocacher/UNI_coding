#include<iostream>
using namespace std;
class Employee {
public:
    string name;
    int Age;

    //Creating a function within the class.
    //The function is called a method.
     
    void introduceYourself(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<Age<<endl;
    }
};


int main()
{
    Employee employee_1;

    employee_1.name = "Abednego";

    employee_1.Age = 56;

    cout<<"Employee_1 name is "<<employee_1.name<<" and is "<<employee_1.Age<<"yrs old"<<endl;

    Employee employee_2;
employee_2.name = "Adjocacher";
employee_2.Age = 90;
cout<<"Employee_2 name is "<<employee_2.name<<" and is "<<employee_2.Age<<"yrs old"<<endl;
    

    //Invoking the method
    employee_1.introduceYourself();




}