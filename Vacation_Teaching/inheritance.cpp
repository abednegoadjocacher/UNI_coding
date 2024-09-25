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

class DevOPs: public Employee {
    public:
    string FavProgrammingLang;
    DevOPs(string Name, int age, string P_language)
    :Employee(Name , age)
        {
            FavProgrammingLang = P_language;
        }

    void Fix_bugs(){
        cout<<getName()<<" is fixing bugs using "<<FavProgrammingLang<<endl;
    }
    
};

class Teacher :public Employee{
    public:
    string subject;
    Teacher(string Name, int age,string Subject)
    :Employee(Name, age)
    {
        subject = Subject;
    }
    void Lesson(){
        cout<<getName()<<" is preparing "<<subject<<" lesson"<<endl;
    }
};

int main()
{
    
    DevOPs d = DevOPs("Abed" , 56 , "C++" );
    d.Fix_bugs();
    d.askForPromotion();
    Teacher ab = Teacher("Abednego", 34, "Mathematics");
    ab.Lesson();
    ab.askForPromotion();
}