#include<stdio.h>
int main()
{
int a,b;
printf("Enter 2 numbers for swaping");
scanf("%d%d",&a,&b);
printf("number before swapping x=%d and y=%d",a,b);


//a=10 b=20
//a=10+20=30
//b=30-20=10
//a=a-b


a=a+b;
b=a-b;
a=a-b;
printf("\nnumber after swapping x=%d and y=%d",a,b);
return 0;
}
