#include<stdio.h>
main()
{
	int m , p , c , tot ;
	float avg;
	printf("ENter the marks of Math");
	printf("\n ENter the marks of Physics");
	printf("\n Enter the marks of Chemistry \n");
	scanf("%d%d%d",&m,&p,&c);
	tot = m + p + c;
	avg = (float)tot/3;
	printf("\n Total marks = %d",tot);
	printf("\n AVERAGE Marks = %f", avg);
return 0;
}
