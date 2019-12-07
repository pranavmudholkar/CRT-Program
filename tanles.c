#include <stdio.h>
int
main ()
{
  int a, n;
  printf("Enter the required number");
  scanf("%d",&a);
  n = 1;
  while (n <= 10)
    {
      printf ("\n %d * %d = %d",n, a, n*a);
      n ++;
    }
}
