#include<stdio.h>
int main(void)
{
    int a,c[100],i,t,j,l=0,s;
    scanf("%d",&a);
    t=a;
    i=0;
    while(t!='\0')
    {
        s=t%10;
        c[i]=s;
        i++;
        t=t/10;
    }
   for(j=i-1;j>=0;j--)
    {
       printf("%d ",c[j]);
    }
}
