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

    int counterEven = 0 , counterOdd = 0;
    for (int i = 0 ; i < n ; i++){
        if(arr[i]%2 == 0){
            counterEven ++;
        }
        else if(arr[i]%2 != 0){
            counterOdd ++;
        }
    }

    printf("counter odd %d\nCounter Even %d\n",counterOdd,counterEven);

    int evenc = 0,oddc = 0,odd[counterOdd],even[counterEven];
    
    for(int i = 0 ; i < n ; i++){
        if(arr[i]%2 == 0){
            even[evenc] = arr[i];
            evenc ++;
        }
        else if(arr[i]%2 != 0){
            odd[oddc] = arr[i];
            oddc ++;
        }
    }


    printf("Odd array \n");

    for(int j = 0 ; j < counterOdd ; j++){
        printf("%d,",odd[j]);
    }

    printf("\nEven array \n");

    for(int j = 0 ; j < counterEven ; j++){
        printf("%d,",even[j]);
    }
    printf("\n");
}