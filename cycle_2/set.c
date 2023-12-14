#include<stdio.h>
int main()
{
int ch,n1,n2,a[20],b[20],s[40],i,j,x=0,y=0,z=0,in[40],dif[20],found;
printf("\nEnter the size of 1'st set");
scanf("%d",&n1);
printf("\nEnter the elements of set 1\t");
for(i=0;i<n1;i++)
scanf("%d",&a[i]);
printf("\nEnter the size of 2'nd set");
scanf("%d",&n2);
printf("\nEnter the elements of set 2\t");
for(i=0;i<n2;i++)
scanf("%d",&b[i]);
do{
printf("\nEnter your choice\n");
printf("1.Union \t 2.Intersection \t 3.Difference \t 4.Exit");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nPerforming union operation");
       for(i=0;i<n1;i++)
       {
        s[x]=a[i];
        x++;
       }
       found=0;
       for(i=0;i<n2;i++)
       {
       found=0;
       for(j=0;j<n1;j++)
       {
        if(b[i]==a[j])
        found=1;
       }
       if(found==0)
       {
       s[x]=b[i];
       x++;
       }
       }
       printf("\nUnion of set is\n");
       for(i=0;i<x;i++)
       printf("%d\t",s[i]);
       break;

case 2:printf("\nPerforming intersection\n");
       for(i=0;i<n1;i++)
       for(j=0;j<n2;j++)
       {
        if(a[i]==b[j])
        {
        in[z]=a[i];
        z++;
        }
       }
       printf("\nInsertion of set\n");
       for(i=0;i<z;i++)
       printf("%d\t",in[i]);
       break;

case 3:printf("\n Performing difference operation\n");
       for(i=0;i<n1;i++)
       {
       found=0;
       for(j=0;j<z;j++)
       if(a[i]==in[j])
       found=1;
       if(found==0)
       {
       dif[y]=a[i];
       y++;
       }
       }
 
       for(i=0;i<y;i++)
       printf("%d\t",dif[i]);
       break;

case 4:printf("\nExiting\n");
       break;

default:printf("\nWrong choice");
}
}while(ch!=4);
return 0;
}
