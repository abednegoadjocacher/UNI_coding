#include<iostream>
using namespace std;
class AbstractEmployee{
    virtual void askForPromotion() = 0;
};
class Employee : AbstractEmployee{
private:
 string name;
 int Age;
public:
//Encapsulation is when we hide some access to members of a class
//To access those members we getters and setters methods
    void SetName(string Name){
        name = Name;
    }

    string getName(){
        return name;
    }

    void SetAge(int age){
        Age = age;
    }

    int getAge(){
        return Age;
    }


    //Creating a function within the class.
    //The function is called a method.
    void introduceYourself(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<Age<<endl;
    }

void askForPromotion(){
    if (Age > 30)
    cout<<name<<" got promoted"<<endl;
    else
    cout<<name<<" sorry no promotion for you."<<endl;
}
    //Constructors is a special type of method that is invoke each time that an object of a class is created.
    //How to create a constructor; There are three rules
    //1. A constructor has no return type.
    //2. A constructor has the same name as the class.
    //3. A constructor must be public.

    Employee(string Name, int age){ //This is a constructor
    name = Name;
    Age = age;

    }
};


int main()
{
    Employee employee_1= Employee("Renita", 34);//invoking a constructor

    Employee employee_2 = Employee("Chirs" , 23);//invoking a constructor
    //Invoking the method

    Employee employee3 = Employee("Abi", 6);
   // employee3.SetName("DELADEM");
    employee3.SetAge(12);
    cout<<employee3.getName()<<" "<<employee3.getAge()<<endl;
    
    employee_1.askForPromotion();
    employee_2.askForPromotion();
    employee3.askForPromotion();




}