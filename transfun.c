#include<stdio.h>
void transpose(int [2][2]);
int main()
{
    int i,j,a[2][2];
    printf("enter the element of a");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    scanf("%d",&a[i][j]);
    }
    transpose(a);
    return 0;
    }
    void transpose(int a[2][2])
    {
    int i,j,res;
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
    res=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=res;
    }
    }
    printf("transpose of the matrices\n");
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
    printf("%d\t",a[j][i]);
    }
    printf("\n");
    }
    return;
    }