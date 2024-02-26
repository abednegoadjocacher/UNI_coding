#include<iostream>
using namespace std;
int main()
{
    // A short code of if-else statements
    int money;
    cout << "How much do you have ? " << endl;
    cin >> money;
    if (money >= 100) //when the amount entered is true: only the if statements block will be executed
    {
        cout << "You can buy something" << endl;
        cout << "What would you like tto buy ?" << endl;
    } //whem its false only else statements block would be executed
    else
    {
    cout << "Please I am sorry you can not afford anything." << endl;
    cout << "You may come later to always buy what you want." << endl;
    }/*This line of code is not part of the else-if. 
    * It will always run when the statements are true or  false
    */
   cout << "You are Welcome" << endl;
    return 0;
}