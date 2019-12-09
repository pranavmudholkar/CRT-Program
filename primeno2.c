#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
	    if (n%i==0)
	    count++;
	}
    if(count==0)
    printf("\n Prime no.");
    else
    printf("\n Composite no.");
}