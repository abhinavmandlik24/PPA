#include<stdio.h>

    

int main ()
{
    
    int Value1 = 0, Value2 = 0, Ans = 0;
   

    printf("Enter first Number:\n");
    scanf("%d",&Value1);


    printf("Enter Second Number:\n");
    scanf("%d",&Value2);

    Ans = Value1 + Value2;          //bussiness Logic
    printf("Addition is : %d\n",Ans);
    
    return 0;

}
