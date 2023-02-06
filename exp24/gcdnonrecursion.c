#include<stdio.h>
int gcd(int a,int b);
int main()
{
int num1,num2;
printf("enter two numbers");
scanf("%d%d",&num1,&num2);
int result=gcd(num1,num2);
printf("the gcd of the %d and %d=%d",num1,num2,result);
return 0;
}
int gcd(int a,int b)
{
int hcf;
for(int i=1;i<=a&&i<=b;i++)
{
if(a%i==0&&b%i==0)
{
hcf=i;
}
}
return hcf;
}



