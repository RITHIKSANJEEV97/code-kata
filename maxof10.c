#include<stdio.h>
void main()
{
    int a[10];
int max=-9999,i;
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
