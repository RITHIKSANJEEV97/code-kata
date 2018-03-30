#include<stdio.h>
int main(void)
{
    int a[100],i,max=-9999;
    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<9;i++)
    {
    if(a[i]>max)
    {
        max=a[i];
    }
    }
    printf("%d",max);

}
