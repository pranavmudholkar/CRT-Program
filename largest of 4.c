#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\n Enter values of a, b and c ");
    scanf("%d%d%d",&a, &b, &c);
    if(a==b && a==c)
    printf("All are equal");
    else if(a<b && a>c)
    printf("\n b is big");
    else if(c<b)
    printf("\n C is big");
    else
    printf("\n c is big");
 
    
}
