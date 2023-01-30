#include<stdio.h>
void main()
{
int a, b, c, d, logical_and, logical_or, logical_not,increment, decrement;
printf("enter a value");
scanf("%d", &a);
printf("enter b value");
scanf("%d", &b);
logical_and =a&&b;
printf("%5d",logical_and);
logical_or=a||b;
printf("%5d",logical_or);
logical_not=!a;
printf("%5d",logical_not);
increment=a++;
printf("%5d", increment);
decrement=--b;
printf("%5d", decrement);
c=a+b;
printf("%5d",c); 
d=a%b;
printf("%5d",d);
return;
}
