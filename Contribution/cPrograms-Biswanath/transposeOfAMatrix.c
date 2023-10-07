// wrtie a c program to compute the
// 1. Transpose of a Matrix

#include <stdio.h>

int main()
{

    int InputRow, InputColumb;

    printf("Enter the number of rows you want in the matrix: \n");
    scanf("%d", &InputRow);

    printf("Enter the number of columbs you want in the matrix: \n");
    scanf("%d", &InputColumb);

    // creating the matrix
    int Matrix[InputRow][InputColumb];
    int TransposeMatrix[InputRow][InputColumb];

    printf("%d %d \n", InputColumb, InputRow);

    // THE USER INPUTTING THE DATA INSIDE THE MATRIX
    for (int i = 0; i < InputRow; i++)
    {

        for (int j = 0; j < InputColumb; j++)
        {
            printf("Enter the elements of the matrix \n");
            scanf("%d", &Matrix[i][j]);
        }
    }

    // PRINTING THE MATRXI TO SEE IF ITS WORKING OR NOT
    for (int i = 0; i < InputRow; i++)
    {

        for (int j = 0; j < InputColumb; j++)
        {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n\n\n");
    }

    // DOING THE TRANSPOSE OF A MATRIX
    for (int i = 0; i < InputRow; i++)
    {

        for (int j = 0; j < InputColumb; j++)
        {
            TransposeMatrix[j][i] = Matrix[i][j];

        }
        
    }


    // PRINTING THE TRANSPOSE OF THE MATRX TO SEE IF ITS WORKING OR NOT
    for (int i = 0; i < InputRow; i++)
    {

        for (int j = 0; j < InputColumb; j++)
        {
            printf("%d",TransposeMatrix[i][j]);
        }
        printf("\n");
    }





}
