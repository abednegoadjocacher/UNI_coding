#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout <<"Select payment method \n"<<"Momo Or Bank\n";
    string paymentMethod;
    cin>>paymentMethod;
    bool Momo,Bank;
   if(Momo = paymentMethod || paymentMethod = Bank)
{
    if (Momo)
    {
        cout <<"Pay\n";
        cout << "payment successful\n" ;
    }
    if(Bank)
    {
         cout <<"Pay\n";
        cout << "payment successful through Bank\n";
    }
}
    else
    cout <<"No payment made";
}