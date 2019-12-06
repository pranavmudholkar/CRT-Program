#include <stdio.h>

int main()
{
    int m,p,c;
	float avg,tot;
	printf("\n enter marks in maths,physics and chemistry:");
	scanf("%d%d%d", &m,&p,&c);
	tot=m+p+c;
	avg=tot/3;
	printf("\n Total Marks: %f",tot);
	printf("\n Average marks: %f",avg);

    return 0;
}

