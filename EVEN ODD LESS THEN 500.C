#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number :");
    scanf("%d",&a);
    printf(" \n 1 for even or odd , 2 for less than 500 \n ");
    scanf("%d",&b);
    switch (b)
    {
    case 1: if (a%2==0)
    {
        printf("%d is even ",a);

    }
    else 
    {
        printf("%d is odd",&a);

    }
        break;
        case 2: if (a==500)
        {
            printf("%d is equal to 500" ,a);
        }
        else if (a>500)
        {
            printf("%d is greater than 500",a);
        }
        else 
        {
            printf("%d is less than 500",a);
        }
        break;
    default: 
       printf("enter a correct choice !");
        break;
    }
}