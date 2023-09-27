#include<stdio.h>
void fun(int *a,int *b)
{
*a=*a+10;
*b=*b+10;
return;
}
int main()
{
int a,b;
printf("\nEnter 2 numbers");
scanf("%d%d",&a,&b);
printf("\nBefore passing a=%d  & b=%d",a,b);
fun(&a,&b);
printf("\nAfter passing a=%d  & b=%d",a,b);
return 0;
}
