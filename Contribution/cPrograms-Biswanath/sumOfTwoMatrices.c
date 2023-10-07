// FINDING THE SUM OF 2 MATRICES
#include <stdio.h>

int main()
{


    // TAKING THE INPUT FOR THE FIRST MATRIX

    int InputRow1, InputColumb1;

    printf("Enter the number of rows you want in the 1st matrix: \n");
    scanf("%d", &InputRow1);

    printf("Enter the number of columbs you want in the 1st matrix: \n");
    scanf("%d", &InputColumb1);


    // TAKING THE INPUT FOR THE SECOND MATRIX

    int InputRow2, InputColumb2;

    printf("Enter the number of rows you want in the 2nd matrix: \n");
    scanf("%d", &InputRow2);

    printf("Enter the number of columbs you want in the 2nd matrix: \n");
    scanf("%d", &InputColumb2);



    // creating the matrix
    int Matrix1[InputRow1][InputColumb1];
    int Matrix2[InputRow2][InputColumb2];

    printf("%d %d \n", InputColumb1, InputRow1);
    printf("%d %d \n", InputColumb2, InputRow2);

    // CHECKING IF ROWS AND COLUMBS ARE SAME OR NOT

    if (InputColumb1 == InputColumb2 && InputRow1 == InputRow2)
    {

        // THE USER INPUTTING THE DATA INSIDE THE MATRIX1
        for (int i = 0; i < InputRow1; i++)
        {

            for (int j = 0; j < InputColumb1; j++)
            {
                printf("Enter the elements of the 1st matrix \n");
                scanf("%d", &Matrix1[i][j]);
            }
        }


        // THE USER INPUTTING THE DATA INSIDE THE MATRIX 2
        for (int i = 0; i < InputRow2; i++)
        {

            for (int j = 0; j < InputColumb2; j++)
            {
                printf("Enter the elements of 2nd  matrix \n");
                scanf("%d", &Matrix2[i][j]);
            }
        }

        int MatrixSum[InputRow2][InputColumb2];

        // NOW CALCULATING THE SUM OF THE MATRICES
        for (int i = 0; i < InputRow2; i++)
        {

            for (int j = 0; j < InputColumb2; j++)
            {
                MatrixSum[i][j] = Matrix1[i][j] + Matrix2[i][j];
            }
        }

            printf("\n");


        // PRINTING THE SUM 
        for (int i = 0; i < InputRow2; i++)
        {

            for (int j = 0; j < InputColumb2; j++)
            {
                printf("%d ", MatrixSum[i][j]);
            }
            printf("\n");
        }

    }
}