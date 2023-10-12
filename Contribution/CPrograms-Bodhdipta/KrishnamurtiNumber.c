//Krishnamurti or Peterson or Strong Number or special number
//If the sum of the factorial of digits of a number (N) is equal to the number itself
#include<stdio.h>
void main()
{
    int n,N,x=1,sum=0,copy;
    printf("Enter a Number: ");
    scanf("%d",&N);
    copy=N;
    while(copy!=0)
    {
        n=copy%10;
        while(n!=0)
        {
            x=x*n;
            n--;
        }
        sum=sum+x;
        copy=copy/10;
        x=1;
    }
    if(sum==N)
    printf("%d is a Krishnamurti Number\n",N);
    else
    printf("%d is not a Krishnamurti Number\n",N);   
}