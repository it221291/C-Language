#include<stdio.h>
#include<math.h>
void main()
{
int i,s,u;
float a,t;
printf("enter the speed");
scanf("%d",&u);
printf("enter the acceleration");
scanf("%f",&a);
printf("enter the distance");
scanf("%d",&s);
for(i=2;i<=10;i++,s=s+3);
{
t=u+sqrt(u*u+2*a*s);
}
printf("%5f",t);
return;
}
