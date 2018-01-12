#include<stdio.h>
void main()
{
    long int a[100000];
    int n,k,i,s=0;
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
    s=s+a[i];
}
printf("%d",s);
}
