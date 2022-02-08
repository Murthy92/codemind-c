#include<stdio.h>
int main()
{
    char C,A,E,I,O,U;
    scanf("%c", &C);
    if(C == 'A'||C == 'E'||C == 'I'||C == 'O'|| C == 'U'||C == 'a'||C == 'e'||C == 'i'||C == 'o'||C =='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}