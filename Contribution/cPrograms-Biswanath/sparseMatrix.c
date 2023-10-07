// write a c program to implement a sparse matrix using array.

// write a c program to implement stack operation using array

#include <stdio.h>

int main()
{

    /*  int InputRow, InputColumb;

      printf("Enter the number of rows you want in the matrix: \n");
      scanf("%d", &InputRow);

      printf("Enter the number of columbs you want in the matrix: \n");
      scanf("%d", &InputColumb);

      // creating the matrix
      int Matrix[InputRow][InputColumb];


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


  */

    // initializing the matrix
    // creating the matrix
    // int Matrix[4][4];
    int Matrix[4][4] = { {0, 0, 3, 4},{5, 0, 0, 0},{0, 0, 0, 0},{0, 0, 0, 0} };

    int InputRow = 4, InputColumb = 4;

    printf("\n");

    // PRINTING THE MATRIX TO SEE IF ITS WORKING OR NOT
    for (int i = 0; i < InputRow; i++)
    {

        for (int j = 0; j < InputColumb; j++)
        {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }

    int numberOfZeros = 0, numberOfNonZeros = 0, a=0;

    int arrOutput[3][3], arrTemporary[3] = {0,0,0};

    // COUTING THE NUMBER OF ZERO AND NON ZERO ELEMENTS
    for (int i = 0; i < InputRow; i++)
    {

        for (int j = 0; j < InputColumb; j++)
        {
            if (Matrix[i][j] == 0)
            {
                numberOfZeros++;
            }
            else if (Matrix[i][j] != 0)
            {
                numberOfNonZeros++;


                // arrTemporary[0] = i; 
                // arrTemporary[1] = j; 
                // arrTemporary[2] = Matrix[i][j];

                // arrOutput[0][0] = {arrTemporary[0],arrTemporary[1],arrTemporary[2]};


                arrOutput[a][0] = i;
                arrOutput[a][1] = j;
                arrOutput[a][2] = Matrix[i][j];

                a++;

                printf("\n %d \n",Matrix[i][j]);
                printf("Row:%d Columb:%d \n",i,j);
            }
        }
    }

// PRINTING THE STUFF 
    for(int i = 0; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){

            printf(arrOutput[i][j]);
        }
    }

    printf("NumberOfZeros: %d\nNumberOfNonZero: %d\n", numberOfZeros, numberOfNonZeros);

    if (numberOfZeros > numberOfNonZeros)
    {
        printf("the given matrix is a sparse matrix \n");
    }
    else
    {
        printf("the given matrix is not a sparse matrix \n");
    }
}
