#include<stdio.h>
int main()
{
int a,b,x;
char s;
printf("Enter 2 numbers\n");
scanf("%d%d",&a,&b);
printf("Enter\n + for addition\n - for subtraction\n* for multiplication\n / for division");
scanf(" %c",&s);
switch(s)
{
case'+':printf("\n Sum=%d",a+b);
break;
case'-':printf("\n Sub=%d",a-b);
break;
case'*':printf("\n mul=%d",a*b);
break;
case'/':printf("\n div=%d",a/b);
break;
default :printf("\n Wrong choice");
}
return 0;
}
