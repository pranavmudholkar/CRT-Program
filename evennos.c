#include <stdio.h>
int
main ()
{
  int  n;
  printf("Enter the required number");
  scanf("%d",&n);
  if (n%2 == 1)
  n = n-1;
  while (n>= 0)
    {
      printf ("\n %d",n );
      n-=2;
    }
}
