#include<stdio.h>
int main(void)
{
    int a,b,c,i,f=0;
    scanf("%d",&a);
    scanf("%d %d",&b,&c);
    for(i=b+1;i<c;i++)
    {
        if(i==a)
        {
            f=1;
        }
    }
    if(f)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
