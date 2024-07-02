#include<iostream>
using namespace std;
/**
 * A program that prints the transpose of a matrix
 * The user will enter the values of the matrix
 * The program will print the user entered values first before its transpose
 */
int main()
{
    //the matrix is 2 x 3
    int i , j;
    i = j = 0;
    int matrix_1[2][3];
    cout<<"Enter the elements of the 2 x 3 matrix ";
    for(i = 0; i < 2; i++)  //This for loop is to help user enter elements
    {
        for(j = 0; j < 3; j++)
        {
            cin>>matrix_1[i][j];
        }
    }
/*cout<<"Matrix one is "<<matrix_1[i][j]<<"\t"; */   // When trying accessing the matrix
                                                    //  from here, it print out garbage values to you

//Another for loop to read the elements in the matrix
    cout<<"The matrix 2 x 3 is : \n";
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<matrix_1[i][j]<<"\t";
        }
        cout<<endl;
    }

    //Now let print the transpose of the above matrix
    cout<<"The matrix 2 x 3 is transpose to 3 x 2 : \n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            cout<<matrix_1[j][i]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}