#include<iostream>
using namespace std;
/**
 * To add two matrices with the same size
 * The user must enter the elements of the matrices
 */
int main()
{
    int i , j, sum_of_matrices[3][3];
    i = j = sum_of_matrices[3][3] = 0;
    int matrix_1[3][3];
    cout<<"Enter the elements of the first 3 x 3 matrix ";
    for(i = 0; i < 3; i++)  //This for loop is to help user enter elements
    {
        for(j = 0; j < 3; j++)
        {
            cin>>matrix_1[i][j];
        }
    }
    int matrix_2[3][3];
    cout<<"Enter the elements of the second 3 x 3 matrix ";
    for(i = 0; i < 3; i++)  //This for loop is to help user enter elements
    {
        for(j = 0; j < 3; j++)
        {
            cin>>matrix_2[i][j];
        }
    }
     cout<<"The elements of the first 3 x 3 is matrix : \n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<matrix_1[i][j]<<"\t";
        }
        cout<<endl;
    }
     cout<<"The elements of the second 3 x 3 matrix is : \n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<matrix_2[i][j]<<"\t";
        }
        cout<<endl;
    }
    //To sum the two matrices
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum_of_matrices[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
        cout<<endl;
    }
    //Now let print the result of the sum
    cout<<"The result of the addition of the matrices are : \n";
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<sum_of_matrices[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}