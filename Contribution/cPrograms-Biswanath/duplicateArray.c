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
        scanf("%d", &arr[i]);
    }

    int counter = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j] && arr[j] != -1)
            {
                counter++;
                
            }
            if(counter > 1 && arr[i] == arr[j]){
                arr[j] = -1;
            }
        }

        if (arr[i] != -1)
        {
            printf("\n %d duplicate  %d", arr[i], counter-1);
        }
        counter = 0;
    }
    printf("\n"); 
    printf("\n");
    printf("\nThe Array Wihout the duplicates");
    printf("\n");


    for(int i = 0 ; i<n ; i++){

        if (arr[i] != -1)
        {
            printf(" %d ", arr[i]);
        }
    }
    printf("\n");
}