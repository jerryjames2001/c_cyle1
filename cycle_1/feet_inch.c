#include<stdio.h>
struct distance
{
int feet;
float inch;
}firstdistance,seconddistance,sum;
int main()
{
printf("\nEnter feet & inch for the first distance\n");
scanf("%d%f",&firstdistance.feet,&firstdistance.inch);
printf("Enter feet & inches for the second distance\n");
scanf("%d%f",&seconddistance.feet,&seconddistance.inch);
sum.feet=firstdistance.feet+seconddistance.feet;
sum.inch=firstdistance.inch+seconddistance.inch;

while(sum.inch>=12)
{
sum.inch=sum.inch-12;
sum.feet++;
}
printf("\nThe sum is %d feet and %f inches\n",sum.feet,sum.inch);
return 0;
}
