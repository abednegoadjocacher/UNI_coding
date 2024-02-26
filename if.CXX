#include<iostream>
using namespace std;
int main()
{
    //A simple if statement
    /**
     * A user enters an amount to know if he / she can buy something
    */
    int money;
    cout << "How much do you have ? " << endl;
    cin >> money;
    if (money >= 100) //when the amount entered is true: all the statements will be executed
    {
        cout << "You can buy something" << endl;
        cout << "What would you like tto buy ?" << endl;
    } //whem its false only these statements would be executed
    cout << "Please I am sorry you can not afford anything." << endl;
    cout << "You may come later to always buy what you want." << endl;
    return 0;

}