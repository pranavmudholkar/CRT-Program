#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    if (a>0)
    {
        printf("\n %d is positive",a);
    }
    else if(a<0)
    {
    	printf("\n %d is negative ",a);
	}
	else 
	{
	    printf("\n %d is zero",a);
	}
    return 0;
}

