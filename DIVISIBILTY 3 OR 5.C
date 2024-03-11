#include<stdio.h>
int main ()
{
int a;
printf("enter a number :");
scanf("%d",&a);
if (a/3==0 || a/5==0)
{
printf("divisible");
}
else if (a/3==0 && a/5==0)
{
    printf("divisible by both ");
}
else
{
   printf("not divisible"); 
   }
return 0;

}