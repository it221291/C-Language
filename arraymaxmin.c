#include<stdio.h>
#define max_size 100
int main()
{
int arr[max_size];
int i,max,min,size,sum;
float avg;
printf("enter size of the array");
scanf("%d",&size);
printf("enter elements in the array");
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
max=arr[0];
min=arr[0];
avg=arr[0];
for(i=1;i<size;i++)
{
if(arr[i]>max)
{
max=arr[i];
}
if(arr[i]<min)
{
min=arr[i];
}
}
for(i=0;i<size;i++)
{
sum=sum+arr[i];
}
avg=sum/size;
printf("maximum element is %d\n",max);
printf("minimum element is %d\n",min);
printf("average element is %f\n",avg);
return 0;
}
