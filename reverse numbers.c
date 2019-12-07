#include <stdio.h>
int
main ()
{
  int  n;
  printf("Enter the required number");
  scanf("%d",&n);
  while (n != 0)
    {
      printf ("\n %d",n );
      n --;
    }
}
