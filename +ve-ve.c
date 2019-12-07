#include<stdio.h>
main()
{
int a;
printf("\n Enter the values");
scanf("%d", &a);
if (a < 0)
{
    printf("The given no. is -ve");
}
else if(a==0)
{
	printf("0");
}
else
{
	printf("The no +ve");
}
}
