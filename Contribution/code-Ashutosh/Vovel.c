#include<stdio.h>
int main(){
    char arr[100];
    printf("Enter the string you wanna make\n");
    int vowel=0,consonant=0,spacecount=0;
    scanf("%s",&arr);
    int size=sizeof(arr);
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U'){
            vowel=vowel+1;
            i=i+1;
        }
        else if(arr[i]==' '){
            i=i+1;
        }
        else{
            consonant=consonant+1;
            i=i+1;
        }
    }
    printf("Number Of Vowels is %d\n",vowel);
    printf("Number Of Consonants is %d\n",consonant);
    return 0;
}
