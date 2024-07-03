#include<iostream>
#define N 50
using namespace std;
/**
 * To print the multiplication of two matrices
 * The size of the matrices must be the same
 * example Mat A=m x n and Mat B=n x p
 * The number of columns of the first Mat must be the
 * same as the rows of the second Mat
 * i.e AB= (m x n)(n x  p) => (n x n)
 * The user must enter the sizes of the matrix
 * Before multiplying, the sizes of the matrix must be check
 */

int main()
{
   int Mat_A[N][N];
   int Mat_B[N][N];
   int sum,row_1,row_2,col_1,col_2;
   int sumof_A_B[N][N];
   cout<<"Enter the row and the column size of the matrix_1 : ";
   cin>>row_1>>col_1;
    //Entering loop
    cout<<"Enter Mat_A :";
    for(int i = 0; i < row_1; i++)
    {
        for(int j = 0; j < col_1; j++)
        {
            cin>>Mat_A[i][j];
        }
    }
    cout<<"Enter the row and the column size of the matrix_2 : ";
    cin>>row_2>>col_2;
    cout<<"Enter Mat_B :";
    for(int i = 0; i < row_2; i++)
    {
        for(int j = 0; j < col_2; j++)
        {
            cin>>Mat_B[i][j];
        }
    }
    //To read the matrices
     cout<<"Mat_A :\n";
    for(int i = 0; i < row_1; i++)
    {
        for(int j = 0; j < col_1; j++)
        {
            cout<<Mat_A[i][j]<<"\t";
        }
        cout<<endl;
    }
     cout<<"Mat_B :\n";
    for(int i = 0; i < row_2; i++)
    {
        for(int j = 0; j < col_2; j++)
        {
            cout<<Mat_B[i][j]<<"\t";
        }
        cout<<endl;
    }
    //The logic to perform the multiplication
    //I need to take three inner for loops
    if(col_1 != row_2) //The condition to check if the matrix can be multiplied
    {
        cout<<"The matrix can not be multiplied\n";
    }
    else
    {
   for(int i = 0; i < row_1; i++)
    {
        for(int j = 0; j < col_2; j++)
        {
            sum = 0;
            for(int k = 0; k < row_1; k++)
            {
                sum +=Mat_A[i][k] * Mat_B[k][j];
            }
            sumof_A_B[i][j] = sum;
        }
    }

    cout<<"The Product of the matrices are :\n";
    for(int i = 0; i < row_1; i++)
    {
        for(int j = 0; j < col_2; j++)
        {
            cout<<sumof_A_B[i][j]<<"\t";
        }
        cout<<endl;
    }
}
    return 0;
}