//WAP to reverse the contents of ptr dynamic array of n elements.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n,i,t;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        t=ptr[i];
        ptr[i]=ptr[n-i-1];
        ptr[n-i-1]=t;
    }
    printf("The reversed array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}