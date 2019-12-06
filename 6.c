#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\n enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("\n before swapping a=%d \t b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nthe value of a is:%d",a);
    printf("\nthe value of b is:%d",b);
    return 0;
}

