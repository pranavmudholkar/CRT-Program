/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n,sum=0,count;
  printf("enter the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if(n%i==0)
      {
          count++;
         
      }
  }
      if(count==2)
      {
          printf("prime number");
      }
      else
      {
          printf("not a prime number");
      }

    return 0;
}
