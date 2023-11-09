#include<stdio.h>//prime numbers like 2,3,5,7,...etc
int main()
{
int i,num,p=0;
printf("Enter a number");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
printf("\n%d is not a prime number",num);
p=1;
break;
}
}
if(p==0)
printf("\n%d is a prime number",num);
return 0;
}
