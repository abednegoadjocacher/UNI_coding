#include<iostream>
using namespace std;
/**
 * To print the multiplication of two matrices
 * The size of the matrices must be the same
 * example Mat A=m x n and Mat B=n x p
 * The number of columns of the first Mat must be the
 * same as the rows of the second Mat
 * i.e AB= (m x n)(n x  p) => (n x n)
 */
int main()
{
   int Mat_A[3][3];
   int Mat_B[3][2];
   int sum;
   int sumof_A_B[3][2];
    //Entering loop
    cout<<"Enter Mat_A :";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin>>Mat_A[i][j];
        }
    }
     cout<<"Enter Mat_B :";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin>>Mat_B[i][j];
        }
    }
    //To read the matrices
     cout<<"Mat_A :\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<Mat_A[i][j]<<"\t";
        }
        cout<<endl;
    }
     cout<<"Mat_B :\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<Mat_B[i][j]<<"\t";
        }
        cout<<endl;
    }
    //The logic to perform the multiplication
    //I need to take three inner for loops
   for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            sum = 0;
            for(int k = 0; k < 3; k++)
            {
                sum +=Mat_A[i][k] * Mat_B[k][j];
            }
            sumof_A_B[i][j] = sum;
        }
    }

    cout<<"The Product of the matrices are :\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<sumof_A_B[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}