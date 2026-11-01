#include<stdio.h>
int main()
{
    int std = 0;
    printf("Enter your Standard :\n");
    scanf("%d",&std);
    if (std == 1)
    {
        printf("Your exam is at 9:30 AM.");
    }
    else if (std == 2)
    {
        printf("Your exam is at 10:30 AM.");
    }
    else if (std == 3)
    {
        printf("Your exam is at 11:30 AM.");
    }
    else
    {
        printf("Invalid there is no any update related your exam.");
    }
    
    return 0;
}
