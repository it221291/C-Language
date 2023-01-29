
#include<stdio.h>
void main()
{
int a,b,c,choice;
printf("1-addition\n2-substraction\n3-multiplication\n4-division\n5-remainder\n");
printf("enter a choice");
scanf("%d",&choice);
printf("enter a,b ");
scanf("%d%d",&a,&b);
switch(choice)
{
case 1:c=a+b;
printf("%5d",c);
break;
case 2:c=a-b;
printf("%5d",c);
break;
case 3:c=a*b;
printf("%5d",c);
break;
case 4:c=a/b;
printf("%5d",c);
break;
case 5:c=a%b;
printf("%5d",c);
break;
default:("invalid operator");
break;
}
return;
}