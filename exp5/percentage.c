#include<stdio.h>
void main()
{
float percentage;
printf("enter percentage");
 scanf("%f",&percentage);
if(percentage>=70.0)
printf("DISTINCTION\n");
else if(percentage>=60.0&&percentage<70.0)
printf("FIRSTCLASS\n");
else if(percentage>=40.0&&percentage<60.0)
printf("SECONDCLASS\n");
else if(percentage>=1.0&&percentage<40.0)
printf("FAIL\n");
else
printf("percentage obtained is %2f",percentage);
return;
 }
