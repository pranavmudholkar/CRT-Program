#include <stdio.h>
int main()
{
    int a;
    printf("\n Enter values of a ");
    scanf("%d",&a);
    if(a%5 ==0 && a%11 == 0)
    printf("iT IS DIVISIBLE BY 5 and 11");
    else
    printf("It is not divisible by 5 and 11");
    
}
