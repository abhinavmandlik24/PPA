#include<stdio.h>
int main()
{
    int std = 0;
    printf("Enter your Standard :");
    scanf("%d",&std);
    switch (std)
    {
    case 1:
        printf("Your exam is at 9:30 AM.");
        break;
    case 2:
        printf("Your exam is at 10:30 AM.");
        break;
    case 3:
        printf("Your exam is at 11:30 AM.");
        break;    
    default:
        printf("Invalid there is no any update related your exam");
        break;
    }
    return 0;
}

