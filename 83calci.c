#include<stdio.h>
int main(void)
{
    char b;
    int a,c,d;
    scanf("%d %c %d",&a,&b,&c);
    if(b=='/')
    {
        printf("%d",(a/c));
    }
    else
    {
        printf("%d",a%c);
    }

}
