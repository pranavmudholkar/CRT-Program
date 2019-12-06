#include <stdio.h>

int main()
{
    int a,b,c;
    printf("\n enter the value of a and b");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("the value of a is:%d",a);
    printf("the value of b is:%d",b);
    return 0;
}

