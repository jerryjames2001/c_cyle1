#include<stdio.h>
int main()
{
float a,b,area,perimeter;
printf("Enter length");
scanf("%f",&a);
printf("Enter breadth");
scanf("%f",&b);
area=a*b;
printf("\nArea of rectangle=%f",area);
perimeter=2*(a+b);
printf("\nPerimeter of rectangle=%f",perimeter);
return 0;
}
