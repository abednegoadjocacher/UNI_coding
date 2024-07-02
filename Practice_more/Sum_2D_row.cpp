#include<iostream>
using namespace std;
/**
 * To print sum of individual rows and colums of 3 x 3 matrice
 * user should enter the elements
 */
int main()
{
    int i,j,sum_rows,sum_colunms;
    i = j = 0;
    int matrix_1[3][3];
    cout<<"Enter the elements of the first 3 x 3 matrix ";
    for(i = 0; i < 3; i++)  //This for loop is to help user enter elements
    {
        for(j = 0; j < 3; j++)
        {
            cin>>matrix_1[i][j];
        }
    }
    cout<<"The matrix_1 is : \n";
    for(i = 0; i < 3; i++)  //This for loop is to print out the elements
    {
        for(j = 0; j < 3; j++)
        {
            cout<<matrix_1[i][j]<<"\t";
        }
        cout<<endl;
    }
    //To print the  individual sums
    for(i = 0; i < 3; i++)  //This for loop is perform the caculations
    {
        sum_rows = sum_colunms = 0;
        for(j = 0; j < 3; j++)
        {
            sum_rows += matrix_1[i][j];
            sum_colunms += matrix_1[j][i];
        }
        cout<<"The sum of rows is "<<sum_rows<<endl;
        cout<<"The sum of columns is "<<sum_colunms<<endl;
    }
    return 0;
}