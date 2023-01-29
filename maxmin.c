#include<stdio.h>
int main()
{
    int a,b,c,maximum,minimum;
    printf("enter a value");
    scanf("%d",&a);
    printf("enter b value");
    scanf("%d",&b);
    printf("enter c value");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
     printf("a is maximum\n"); 
     }
     else if(b>c)
     {
     printf("b is maximum\n");
     }
     else
     {
    printf("cis maximum\n");
}
if(a<b&&a<c)
{
    printf("a is minimum\n");
      }
   else if (b<c)
     {
    printf("bis minimum\n");
      }
     else
    {
   printf("c is minimum");
    }
  return 0;
    }