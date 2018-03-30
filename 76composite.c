#include<stdio.h>
int main(void)
{
    int a,c=2,i;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==3)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
