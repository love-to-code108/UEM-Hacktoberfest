#include<stdio.h>
int main(){
    float cel,fah;
    printf("Enter celcius scale temp\n");
    scanf("%f",&cel);
    float fahreinheit=((9*cel)/5)+32;
    printf("Fehrenheit is %f\n",fahreinheit);
    printf("Enter temperature in fahrenheit\n");
    scanf("%f",&fah);
    float celcius=((fah-32)*5)/9;
    printf("Celsius is %f\n",celcius);
    return 0;
}