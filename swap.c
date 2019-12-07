#include<stdio.h>
main()
{
	  int a, b, c;
	  printf("\n Enter the two values");
	  scanf("%d%d", &a,&b);
	  printf("Values before swap \n %d \t %d ",a, b);
	  c=a;
	  a=b;
	  b=c;
	  printf("The values are %d \n %d \n", a,b,c );
	  
}
