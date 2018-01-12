#include<stdio.h>
void main()
{
    int a,b,c=1,i;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        c=c*a;
    }
    printf("%d",c);
}
