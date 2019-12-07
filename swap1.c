#include<stdio.h>
main()
{
	  int a, b, c;
	  printf("\n Enter the two values");
	  scanf("%d%d", &a,&b);
	  printf("Values before swap \n %d \n %d ",a, b);
	  a=a+b;
	  b=a-b;
	  a=a-b;
	  printf("The values are %d \n %d \n", a,b,c );
	  
}
