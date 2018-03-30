#include<stdio.h>
int main(void)
{
    int a,b,i,k=0,f=0,g;
    int c[100];
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        a=a^b;
        b=a^b;
        a=a^b;
    }
    for(i=2;i<b;i++)
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
    g=a*b;
    f=g/c[k-1];
    printf("%d",f);


}

