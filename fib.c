#include<stdio.h>
void main()
{
int f=0,s=1,n,c=0,i;
scanf("%d",&n);
printf("1 ");
for(i=0;i<n-1;i++)
{
 c=f+s;
 f=s;
 s=c;
 printf("%d ",c);
}
}
