#include <iostream>
using namespace std;

int main()
{
    int marks[10];
    int item;
    bool found = false;
    
    cout<<"Enter the elements of your array  :  "<<endl;
    
    for(int i= 0; i<10; i++)
    {
    
    cin>>marks[i];
    }
    
    cout<<"Enter the item to search : ";
    cin>> item;
    
     for(int i= 0; i<10; i++)
       {
         if ( marks[i] == item)
         {
         cout<< "The element  " << item << " is found at index i = "<<i<<endl;
         found = true;
         break;
         }
        
       }
       
       
         if (!found)
         {
         cout<< "The element is not found in the array"<<endl;
         }
    
    return 0;
    
}