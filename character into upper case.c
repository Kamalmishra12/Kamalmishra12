#include<stdio.h>
int main()
{
    char x ;
    printf("enter a charcter :");
    scanf("%c",&x);
    if (x>='a'&&x<='z')
    {
       x=x-32;
       printf("%c",x);
    }
    return 0;
}