 #include<stdio.h>
 int main()
 {
    float l, b , r,a ;
    int i;
    printf("enter 1 for circle ,2 for rectangle :");
    scanf("%d",&i);
    switch (i)
    {
    case 1: printf("\n enter r :");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("area= %f",a);
        break;
        case 2: printf(" \n enter l & b :");
        scanf("%f",&l,&b);
        a=l*b;
        printf("area= %f",a);
        break;
    
    default:
    printf("wrong choice ");
        break;
    }
 }