#include<stdio.h>
int main()
{
int i,n,ch,a[20],el,j,x,b[20],c[50],temp;

printf("\nEnter the limit for array (one time only )");
scanf("\n%d",&n);
do{
printf("\nEnter the choice\n1. Insert \n2. sort \n3.delete \n4.Merge \n5.Display \n6.Exit\n");
scanf("\t%d",&ch);
switch(ch)
{
case 1:printf("\nEnter the no:of elements for insertion");
       scanf("\t%d",&el);
       printf("\nEnter the %d elements",el);
       for(i=0;i<el;i++)
       scanf("%d",&a[i]);
       for(i=0;i<x;i++)
       printf("\t%d",a[i]);
       break;

case 2:for(i=0;i<n;i++)
       for(j=i+1;j<n;j++)
       {
       if(a[i]>a[j])
       {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
       }
       }
       for(i=0;i<n;i++)
       printf("%d\t",a[i]);
       break;

case 3:printf("\nEnter the element for deletion");
       scanf("\t%d",&el);
       for(i=0;i<=n;i++)
       {
       if(a[i]!=el)
       printf("\nElement not found");
       else
       a[i]=0;
       }
       break;
       
case 4:printf("\nEnter the limit for 2nd array");
       scanf("%d",&x);
       printf("\nEnter the elements for 2st array");
       for(i=0;i<x;i++)
       scanf("%d",&b[i]);

       for(i=0;i<n;i++)
       c[i]=a[i];
       for(i=0;i<x;i++)
       c[i+n]=b[i];
       for(i=0;i<n+x;i++)
       for(j=i+1;j<n+x;j++)
       if(c[i]>c[j])
       {
        temp=c[i];
        c[i]=c[j];
        c[j]=temp;
       }
       for(i=0;i<n+x;i++)
       printf("\t%d",c[i]);
       break;

case 5:printf("\nDisplaying\n");
       for(i=0;i<x;i++)
       printf("\t%d",a[i]);
       break;
case 6:printf("\nExiting");
       break;
default:printf("\nWrong choice");
}
}while(ch!=6);
printf("\nExiting");
return 0;
}


