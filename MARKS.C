#include <stdio.h>
void main()
{
int marks[6];
int total =0;
float avg;
printf("Enter marks for 6 subjects:\n");
for(int i=0;i<6;i++){
printf("Subject %d:",i+1);
scanf("%d",&marks[i]);
total +=marks[i];
}
avg =total/6.0;
printf("Total Marks:%d\n",total);
printf("Average Marks:%.2f\n",avg);
}