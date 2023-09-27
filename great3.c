#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
printf("\n%d is the greatest",a);
}
if(b>c)
{
if(b>a)
printf("\n%d is the greatest",b);
}
else
printf("\n%d is the greatest",c);
return 0;
}
