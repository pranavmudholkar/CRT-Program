#include <stdio.h>
int
main ()
{
  int a, n, r,s=0;
  printf ("Enter the number");
  scanf ("%d", &n);
  n = a;
  while (n > 0)
    {
      r = n % 10;
      s=s+r;
      n = n / 10;
    }
    if(s==n)
  printf ("\n It is palindrome" );
  else
  printf("\n It isnnot palindrome");
}
