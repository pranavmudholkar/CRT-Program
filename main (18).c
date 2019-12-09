/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,r,sum=0;
    printf("\n enter the vehicle number");
    scanf("%d",&n);
    test:
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n\10;
    }
    if(sum<10)
    printf("\n lucky no:%d",sum);
    else
    {
        n=sum;
        sum=0;
        goto test;
    }
}