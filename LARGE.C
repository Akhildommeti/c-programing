#include <stdio.h>
void main()
{
double a,b,c,max;
printf("Enter values for a,b,c:");
scanf("%lf,%lf,%lf",&a,&b,&c);
max = (a>b)?((a>c)?a:c):((b>c)?b:c);
printf("the largest number is %lf",max);
}