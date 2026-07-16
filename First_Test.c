#include<stdio.h>

// THIS IS A CELCIOUS TO FHRENITE TEMPERATURE CONVERTOR

int main(){
    float a, b, c, d;
    printf("Enter the temperature in Celciousa ");
    scanf("%f", &a);
    b = (a*1.8)+ 32;
    printf("The temperature in Fahrenheit is %2f", b);


// THIS IS A FAHRENHEIT TO CELCIOUS CONVERTOR.

    printf("Enter temperature in Fahrenheit ");
    scanf("%f", &c);
    d = (c-32)* 5/9;
    printf("The temperature in Celsious is %4f", d);

}