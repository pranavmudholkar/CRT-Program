#include<stdio.h>
main()
{
	int i,n;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if (n%i==0)
	printf("\n %d ",i);
	}
}