#include<stdio.h>
main()
{
int a;
printf("\n Enter the values");
scanf("%d", &a);
printf(a>0 ? "The no is +ve" : a < 0 ? "The no is -ve " :" zero");
}
