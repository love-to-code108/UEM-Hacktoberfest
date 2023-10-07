#include<stdio.h>
int main(void)
{
    int r = 4, c = 5,i,j,k = 0,size = 0;
    int sm [4][5] =  
    {  
        {0 , 0 , 6 , 0 , 9 },  
        {0 , 0 , 4 , 6 , 0 },  
        {0 , 0 , 0 , 0 , 0 },  
        {0 , 1 , 2 , 0 , 0 }  
    };
    
    printf("The sparse matrix:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++) printf("%d ",sm[i][j]);
        printf("\n");
    }


    for(i = 0; i < r; i++) for(j = 0; j < r; j++) size++;
    int mat[3][size];
    
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(sm[i][j] != 0)
            {
                mat[0][k] = i;
                mat[1][k] = j;
                mat[2][k] = sm[i][j];
                k++;
            }
        }
    }
    printf("\nThe reduced matrix: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < k; j++) printf("%d ",mat[i][j]);
        printf("\n");
    }

}