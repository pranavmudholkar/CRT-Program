#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\n Enter values");
    scanf("%d%d",&a, &b);
    printf("\n 1.addition \n 2.Substraction \n 3. Multipication \n 4. Division \n");
    scanf("\n %d",&c);
    switch(c)
    {
        case 1:printf("\n ANS is = %d", a+b); break;
        case 2:printf("\n ANS is = %d", a-b); break;
        case 3:printf("\n ANS is = %d", a*b); break;
        case 4:printf("\n ANS is = %d", a/b); break;
        default:printf("invalid");
    }
    
}