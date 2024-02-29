 #include<iostream>
 using namespace std;
int main()
/**
 * To calculate and print all the sum even from 1 to a given positive integer
 * 'n'.Allow the user to enter the value of 'n' 
 * Also handle if a user enter invalid argument
*/
{
    cout <<"Enter any number\n";
    int n;
    cin>>n;
 int even = 0;
 if(n != '\0')
 {
     for (int i=1;i<=n;i++)
     
    {
    if (i%2==0)
    {
        even+=i;
    }
    }
    cout << "The sum of all the even nubers is :"<< even <<endl;
    cout <<"The entered number is :"<< n<< endl;
 }
    cout<<"Invalid value\n";
    return 0;
}