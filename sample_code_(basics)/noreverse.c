#include<stdio.h>
int main()
{
int num,temp,a=0;
printf("Enter a 4 digit number");
scanf("%d",&num);

while(num!=0){

temp=num%10;
a=a+temp;
temp=0;
num=num/10;
}
printf("\nSum==%d",a);
return 0;
}
