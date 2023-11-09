#include<stdio.h>
int main()
{
int i,n;
printf("\nEnter limit for natural numbers");
scanf("%d",&n);
printf("\n odd numbers are\n");
for(i=1;i<=n;i++)
if(i%2!=0)
printf("\n%d",i);
return 0;
}
