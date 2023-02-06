#include<stdio.h>
int num( int n);
int main()
{
int n;

printf("enter a number");
scanf("%d",&n);
printf("factorial of %d=%d",n,num(n));
return 0;
}
int num (int n)
{
if(n>1)
return n*num(n-1);
else 

return 1;
} 



