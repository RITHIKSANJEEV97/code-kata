#include<stdio.h>
int main(void)
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<100000;i=i+10)
    {
        if(n<i)
        {
            printf("%d",i);
            break;
        }
    }
}
