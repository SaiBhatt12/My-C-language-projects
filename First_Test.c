#include<stdio.h>

// THIS IS A CELCIOUS TO FHRENITE TEMPERATURE CONVERTOR

int main(){
    float a, b, c, d;
    printf("Enter the Temperature in Celsious ");
    scanf("%f", &a);
    b = (a*1.8)+ 32;
    printf("The Temperature in Fahrenheit is %.2f", b);


// THIS IS A FAHRENHEIT TO CELCIOUS CONVERTOR.

    printf("\nEnter Temperature in Fahrenheit ");
    scanf("%f", &c);
    d = (c-32)* 5/9;
    printf("\nThe Temperature in Celsious is %.2f", d);

}