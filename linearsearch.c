#include<stdio.h>
int f(int *a,int item,int n);
int main()
{
int i,item,flag=0,a[20],n;
printf("\nEnter the limit");
scanf("%d",&n);
printf("\nEnter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("\nEnter the search item");
scanf("%d",&item);

flag=f(a,item,n);

if(flag!=1)
printf("\n Element not found");
return 0;
}

int f(int *a,int item,int n)
{
int i,flag;
for(i=0;i<n;i++)
{
if(item==a[i])
{
printf("\n %d found at position %d",item,i+1);
flag=1;
break;
}
}
return flag;
}

