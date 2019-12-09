#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the value of numbers");
    scanf("%d",&n);
    if(n%2==0)
          goto even;
    else
          goto odd;
    even: printf("\n Even");
    exit(0);
    odd: printf("\n Odd");
 }