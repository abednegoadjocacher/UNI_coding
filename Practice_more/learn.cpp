#include<iostream>
using namespace std;
int main()
{
    /**
     * To recall an array
     * 
     * Read an array 
     * print an array
     * 
     * Initial an array 
     * print it
     * 
     * Perform calulation on array
     * Addition
     * Multiplication
     * 
     * 
    */

/*
//Integer fof arrays
cout<<"------ARRAY AT INITIALIZATION STATE-------"<<endl<<"\n";
int Arr[8] ={4,6,5,23,233,2444,46,90};//Array initializtion

for(int i=0; i<8; i++)
{
    cout<<Arr[i]<<"\t";
}
cout<<endl<<"\n";
//To prompt user to enter the size of an array.
//To prompt the user to enter the elements of the array.
int size;
cout<<"Enter the size of the array : ";
cin>>size;
cout<<"enter elements : "<<endl;
int ARRAY[size];
for(int k=0; k<size; k++)
{
    cin>>ARRAY[k];
}

cout<<"The entered elements are : ";
for(int k=0; k<size; k++)
{
    cout<<ARRAY[k]<<"\t"<<"\n\n";
}
*/

//To print multiple dimensional array

cout<<"-----MULTIPLE ARRAY------"<<endl;
int number_size;
cout<<"ARRAY SIZE :";
cin>>number_size;
int row[number_size][number_size];
for(int outer=0; outer<number_size; outer++)
{
    for(int inner=0;inner<number_size; inner++)
    {
        cin>>row[outer][inner];
    }
}
cout<<endl;
//To print multiple array
cout<<"You enterd nxn matrix : "<<endl;
for(int i=0; i<number_size; i++)
{
    for (int j = 0; j < number_size; j++)
    {
    cout<<row[i][j]<<"\t";
    }
    cout<<"\n";
}
   return 0;
}