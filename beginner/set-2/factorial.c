#include<stdio.h>
void main()
{
int fact,i,s=1;
scanf("%d",&fact);
for(i=1;i<=fact;i++)
{
    s=s*i;
}
printf("%d",s);
}
