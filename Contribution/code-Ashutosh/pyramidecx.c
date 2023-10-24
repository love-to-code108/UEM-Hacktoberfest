#include<stdio.h>
int main(){
    int rowcount;
    printf("Enter Row Count");
    scanf("%d",&rowcount);
    for(int i=1;i<=rowcount;i++){
        int columncount=(rowcount*2)-1;
        int starlimit=(2*(i-1))+1;
        int spacecount=rowcount-i;
        int starcount=1;
        for(int j=1;j<=columncount;j++){
            if(j<=spacecount){
                printf(" ");
            }
            else if(starcount<=starlimit){
                printf("*");
                starcount=starcount+1;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
        starcount=1;   
    }
    return 0;
}
