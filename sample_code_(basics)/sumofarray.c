#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("\nEnter the limit number");
scanf("%d",&n);
int ar[n];
printf("\nEnter the elements");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
for(i=0;i<n;i++)
sum=sum+ar[i];
printf("\n Sum of numbers are %d",sum);
return 0;
}

