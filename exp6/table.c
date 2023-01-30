#include<stdio.h>
void main()
{
     int num1,num2,product;
     printf("enter the number");
 scanf("%d",&num1);
    num2=1;
while(num2<=3)
     {
 product=num1*num2;
printf("%d*%d=%d\n",num1,num2,product);
     num2=num2+1;
     }
 return;
     }
