#include<stdio.h>
int main()
{
int rev=0,n,m,r;
printf("enter the number: \n");
scanf("%d",&n);
m=n;
while(n>0)
{
r=n%10;
rev=10*rev+r;
n=n/10;
}
printf("reverse of given number is %d\n",rev);
if(rev==m)
printf("the palindrome number is %d\n",m);
else
printf("%d is not a palindrome\n",m);
return 0;
}