#include <stdio.h>
#include <math.h>
void main()
 {
int num=0, digit=0, sum=0; 
printf("enter any number\n");
scanf("%d", &num);
while (num!=0)
 { 
digit=num%10;
sum=sum+digit;
num=num/10;
}
printf("sum of individual digits of a given number is%d", sum) ;
return;
}