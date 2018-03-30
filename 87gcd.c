#include<stdio.h>
int main(void)
{
    int a,b,i,k=0,f=0;
    int c[100];
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }
    for(i=2;i<a;i++)
    {
        if(b%i==0)
        {
            if(a%i==0)
            {
                c[k]=i;
                k++;
            }
        }
    }
    printf("%d",c[k-1]);


}
