#include<stdio.h>
#include<math.h>
void main()
{
int p,t,r,simple_intrest,compound_intrest;
printf("enter the principal amount");
scanf("%d",&p);
printf("enter the time period");
scanf("%d",&t);
printf("enter the rate of intrest");
scanf("%d",&r);
simple_intrest=(p*t*r)/100;
printf("the simple intrest is%d\n",simple_intrest);
compound_intrest=p*(pow(1+r/100,t));
printf("the compound intrest is %d",compound_intrest);
return;
 }
