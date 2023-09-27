#include<stdio.h>
int main()
{
int i,j,r,c,ar[50][50],br[50][50],sum[50][50];
printf("\nEnter the required row X column\t");
scanf("%d%d",&r,&c);
printf("\nEnter the elements of 1'st matrix");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&ar[i][j]);
printf("\nEnter the elements of 2'nd matrix");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&br[i][j]);
printf("\nSum of the matrix\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
sum[i][j]=ar[i][j]+br[i][j];
printf(" %d \t",sum[i][j]);
}
printf("\n");
}
return 0;
}
