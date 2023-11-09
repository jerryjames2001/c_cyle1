#include<stdio.h>
int main()
{
int i,j,ar[10][10],n;
printf("\nEnter the required row or column number same number required so only 1 number is user for limit");
scanf("%d",&n);
printf("\nEnter the array elements");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&ar[i][j]);
printf("\nTranspose is\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",ar[j][i]);
printf("\n");
}
return 0;
}
