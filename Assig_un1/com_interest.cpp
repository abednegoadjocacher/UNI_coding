#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double comp_interest = 0;
    double rate,time,principal;
    cout<<"Enter the principle amount : ";
    cin>>principal;
    cout<<"Enter the rate : ";
    cin>>rate;
    cout <<"Enter time in years : ";
    cin>>time;
    comp_interest = principal * pow ((1 + (rate/100)), time);
    cout<<"The compound interest is : "<<comp_interest<<endl;
    return 0;

}