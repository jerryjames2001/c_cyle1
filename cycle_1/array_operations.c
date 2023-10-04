#include<stdio.h>
void insert(int *x,int b[]);
void sort(int *n,int a[]);
void delete(int *n,int a[]);
void merge(int *n,int *x,int a[],int b[]);
int main()
{
int i,j,n,x,a[50],b[50],ch;
do
{
printf("\nEnter your choice\n 1. Insert \t 2. Sort \t 3. Display \t 4. Delete \t 5. Merging \t 6. Exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("Enter the no:of elements for insertion");
       scanf("%d",&n);
       printf("\nEnter the elements");
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       break;
case 2:void sort(int *n,int a[]);
       break;
case 3:printf("The elements are\n");
       for(i=0;i<n;i++)
       printf("%d\t",a[i]);
       break;
case 4:


}
}while(ch!=6);
return 0;
}

void sort(int *n,int a[])
{
int temp,i,j;
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
printf("\nAfter soting \n");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}


