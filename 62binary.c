#include<stdio.h>
int main(void)
{
    int n,s[100],t=0,i=0,flag=0,j,d,c=0;
    scanf("%d",&n);
    d=n;
    while(d!=0)
    {
       t=d%10;
       s[i]=t;
       i++;
       d=d/10;
       c++;
    }
    for(j=c-1;j>=0;j--)
    {
       if(s[j]==1 || s[j]==0)
        {
            flag=1;
        }
        else
            {
            flag=2;
            }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    if(flag==2)
        {
        printf("No");
    }
}
