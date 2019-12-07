#include <stdio.h>
int
main ()
{
  int count=0, n, r;
  printf ("Enter the number");
  scanf ("%d", &n);
  printf ("\n reverse number");
  while (n > 0)
    {
      r = n % 10;
      printf ("%d", r);
      count++;
      n = n / 10;
    }
  printf ("\n count is = %d", count);
}
