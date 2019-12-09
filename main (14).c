/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    printf("enter no.to stop");
    scanf("%d",&n);
    for(i=1;i<=20;i++)
    {
        
         printf("\n %d",i);
         if(i==n)
         exit(0);
    }
    printf("\nhello");
    return 0;
}
