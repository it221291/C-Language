#include<stdio.h>
int main()
{
int a,b,c,i;
printf("enter a and b: ");
scanf("%d%d",&a,&b);
for(i=3;i<=10;i++)
{
c=a+b;
printf("%5d",c);
a=b;
b=c;
}
return 0;
}
