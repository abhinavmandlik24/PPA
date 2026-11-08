//Convert temperature in Fahrenheit to Celsius

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float f,c;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f",&f);

    c = 5.0 / 9.0*(f-32);

    printf("Temperature in Celsius is :%6.2f\n",c);

    return EXIT_SUCCESS;
}
