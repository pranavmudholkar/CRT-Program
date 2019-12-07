#include <stdio.h>
int main()
{
    int a;
    printf("\n Enter values of a ");
    scanf("%d",&a);
    if(a<10)
    printf("It is a 1 digit number");
    else if(a<99 && a>9)
    printf("It is a 2 digit number");
    else if(a<999 && a>99)
    printf("It is a 3 digit number");
    else if(a<9999 && a>999)
    printf("It is a 4 digit number");
}