#include<stdio.h>
void main()
{
int a,b,i,j,c;
scanf("%d",&a);
scanf("%d",&b);
for(i=a;i<b;i++)
{
    c=0;
    for(j=1;j<b;j++)
    {
        if(i%j==0)
        {
            c++;
        }
    }
        if(c==2)
        {
            printf("%d ",i);
        }
}
}



