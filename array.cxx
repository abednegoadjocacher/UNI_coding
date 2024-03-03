#include<iostream>
using namespace std;
int main()
{
    /**
     * Array declaration.
     * Array intialization
    */
   int roll_num[10] = {3,8,3,9,3,7,5,2,6,0};//at compile time intialization
   float arr[]={33.3,3.4,4.21,5.677,56.8938};//also correct way to intialize without size

   //At run time the user enters
   char ch[7];
   cout <<"Enter some character :\n";
   for(int i=0;i<=6;i++)
   {
    cin>>ch[i];
   }

   //To access the array
   cout<<"--------------The entered characters----------"<<endl;
   for(int i=0;i<=6;i++)
   {
    cout <<ch[i]<<endl;
   }
/*cout <<"The adderss "<<&ch<<endl;
//cout <<"Address without & operator "<<ch<<endl;
cout <<&ch[0]<<endl;
cout <<&ch[1]<<endl;
cout <<&ch[2]<<endl;
cout <<&ch[3]<<endl;
cout <<&ch[4]<<endl;
cout <<&ch[5]<<endl;
cout <<&ch[6]<<endl;
*/
   return 0;

}