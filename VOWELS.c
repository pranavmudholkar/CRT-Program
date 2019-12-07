#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the letter ");
    scanf("%c",&ch);
    ch= tolower(ch);
    switch(ch)
    {
        case 'a':printf("\n VOWEL"  ); break;
        case 'e':printf("\n VOWEL" ); break;
        case 'i':printf("\n VOWEL"); break;
        case 'o':printf("\nVOWEL" ); break;
        case 'u':printf("\n VOWEL "); break;
        default:printf("consonant");
    }
    
}