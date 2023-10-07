#include <stdio.h>

int main()
{
    int n, input;
    printf("Enter the length of the array \n");
    scanf("%d", &n);
    int arr[n];

    // taking the input in the array
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d",&arr[i] );

    }

    // trying to debug and check if there is any problems;
    printf("%d", arr[2]);


    int max = arr[0];
    for (int i = 1; i < n ; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    printf("\n Maximum %d", max);

    int min = arr[0];
    for (int i = 1; i < n ; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("\n Minimum %d \n", min);
}