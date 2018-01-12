#include<stdio.h>
void main()
{
int a,b=0,s=0;
scanf("%d",&a);
while(a!=0)
{
    s=a%10;
    b++;
    a=a/10;
}
printf("%d",b);
}
