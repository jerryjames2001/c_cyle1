#include<stdio.h>
int main()
{
int i,n,temp;
printf("\nEnter the limit number");
scanf("%d",&n);
int ar[n];
printf("\nEnter the elements");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
for(i=0;i<n-1;i++)
{
if(ar[i]>ar[i+1])
temp=ar[i];
else
temp=ar[i+1];
}
printf("\nGreatest number is =%d",temp);
return 0;
}
