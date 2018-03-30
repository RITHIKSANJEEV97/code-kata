#include<stdio.h>
int main(void)
{
    int a,i=0,t,s[100],h,j;
    scanf("%d",&a);
    h=a;
    while(h!=0)
    {
     t=h%10;
     s[i]=t;
     i++;
     h=h/10;
    }
    for(j=i;j>=0;j--)
    {
        if(s[j] & 1)
        {
            printf("%d ",s[j]);
        }
        else
        {

        }
    }
}

