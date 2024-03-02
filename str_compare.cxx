#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Comparing of strings
    string S1 = "Apps";
    string S2 = "Apples";
    string S3 = "mens ";
    string largest;
    if ((S1 > S2) &&(S1 > S3))
    {
    largest = S1;
    cout << "The largest is : "<<S1<<endl;
    }
    else if((S2 > S1) && (S2 > S3))
    {
        largest=S2;
        cout<<"The largest is : "<<S2<<endl;
    }
    else
    cout <<"The largest is "<< S3<< endl;
}