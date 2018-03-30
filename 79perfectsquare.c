#include<stdio.h>
int main(void)
{
    int a,b,c,flag=0,i,j=1;;
    scanf("%d %d",&a,&b);
    c=a*b;
    for(i=1;i<=c;i++)
    {
        if(i*j==c && i==j)
        {
            flag=1;
            break;
        }
        j++;
    }

    if(flag)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }
}

