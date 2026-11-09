//Circumference and area of circle

#include<stdio.h>
#include<stdlib.h>

int main()
{
 float r, cir, area;

 printf(" Enter the radius of circle : \n ");
 scanf("%f",&r);

 cir=2*22.0/7*r;

 area=22.0/7*r*r;

printf("Circumference of circle is :%6.2f \n",cir);

printf("Area of circle is : %6.2f \n",area);

 return EXIT_SUCCESS;

}