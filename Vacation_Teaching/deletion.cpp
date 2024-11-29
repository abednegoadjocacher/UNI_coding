#include <iostream>
using namespace std;
int main()
{
    int marks[10];
    int item;
    bool found = false;
    int size = 10;
    
    cout<<"Enter the elements of your array: "<<endl;
    for(int i =0; i<10; i++)
       {
         cin>>marks[i];
       }
    
     cout<<"Enter item of array to delete: "<<endl;
     cin>>item;
     
 for (int i = 0; i < size; i++)
  {
      if (marks[i] == item)
      { 
         cout << "The element " << item << " is found at index: " << i << endl;
         found = true;

    // Move elements to the left to remove the item
          for (int j = i; j < size - 1; j++)
              {
                 marks[j] = marks[j + 1];
               }

         size--; // Reduce the size after deletion
   
         break;  // Exit the loop as we've found the item
      }
  }     
         
         if(!found)
         {
         cout<< "The element is not found in the array"<<endl;
         }
         
         
         else
         {
             cout<<"updated Array: "<<endl;
             
             for(int i =0; i<size; i++)
             cout<<marks[i]<<" "<<endl;
         }  
  return 0;
}