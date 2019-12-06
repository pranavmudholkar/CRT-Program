*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf(a>0?"ve":a<0?"-ve":"zero");
    return 0;
}
