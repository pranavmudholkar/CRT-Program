#include <stdio.h>
int main()
{
    int a, b;
    printf("\n Enter values of a and b ");
    scanf("%d%d",&a, &b);
    if(a>b)
    printf("\n a is big");
    else if(b>a)
    printf("\n b is big");
    else
    printf("Both are equal");
 
    
}
