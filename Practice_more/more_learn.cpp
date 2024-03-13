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
// 3D ARRAY
//User should enter row by column of the matrix
cout<<"-----MULTIPLE ARRAY------"<<endl;
int number_row, number_coln;
cout<<"enter the row by column size :";
cin>>number_row>>number_coln;
cout<<"Enter the elements of the array : ";
int row[number_row][number_coln];
for(int outer=0; outer<number_row; outer++)
{
    for(int inner=0;inner<number_coln; inner++)
    {
        cin>>row[outer][inner];
    }
}
cout<<endl;
//To print multiple array
cout<<"You enterd nxn matrix : "<<endl;
for(int i=0; i<number_row; i++)
{
    for (int j = 0; j < number_coln; j++)
    {
    cout<<row[i][j]<<"\t";
    }
    cout<<"\n";
}
   return 0;
}