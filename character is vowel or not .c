#include<stdio.h>
int main()
{
    char x ;
    printf("enter a character :");
    scanf("%c",&x);
    switch (x)
    {
    case 'a':
    case 'A':
     case 'e':
     case 'E': 
     case 'i':
     case 'I':
     case 'o':
     case 'O':
     case 'u':
     case 'U':
printf("vowel");
        break;
    
    default: 
    printf("not vowel");
        break;
    }
}