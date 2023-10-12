//A neon number is a number where the sum of digits of square of the number is equal to the number. 
#include<stdio.h>
void main()
{
    int n,sum,x;
    printf("Input a number: ");
    scanf("%d",&n);
    int sq=n*n;
    int copy=sq;
    while(copy!=0)
    {
        x=copy%10;
        sum=sum+x;
        copy=copy/10;
    }
    if(sum==n)
    printf("%d is a Neon Number\n",n);
    else
    printf("%d is not a Neon Number\n",n);
}