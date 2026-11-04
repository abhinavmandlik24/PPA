#include<stdio.h>

#pragma Pack(1)
union Demo
{
    int i;
    float f;
    double d;
};

int main()
{
    printf("%d\n",sizeof(union Demo));



    return 0;
}