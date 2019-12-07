#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\n Enter values of a and b ");
    scanf("%d%d%d",&a, &b, &c);
    if(a>b && a>c)
    printf("\n a is big");
    else if(b>a && b>c)
    printf("\n b is big");
    else if(c>a && c>b)
    printf("\n C is big");
    else
    printf("All are equal;");
 
    
}
