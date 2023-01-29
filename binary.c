#include<stdio.h>
#include<conio.h>
void main()
{
     int num,length,i;
     int a[10];
printf("enter a possitive number");
     scanf("%d",&num);
     length=0;
     i=0;
     while(num>0)
     {
      a[i]=num%2;
     num/=2;
    length++;
     i++;
      }
  printf("binary equivalent is: ");
       for(i=length-1;i>=0;i--)
    {
  printf("%d",a[i]);
     }
  return;
    }