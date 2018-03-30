#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    if(c & 1 )
    {
        printf("odd");
    }
    else
    {
        printf("even");
    }
}
