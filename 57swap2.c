#include<stdio.h>
void main()
{
    int a,b,j,s[100],i,r;
    scanf("%d %d",&a,&b);
    while(a!=0)
    {
        i=0;
        r=a%10;
        s[i]=r;
        a=a/10;
        i++;
    }
    s[2]=' ';
    while(b!=0)
    {
        i=3;
        r=b%10;
        s[i]=r;
        b=b/10;
        i++;
    }
    for(j=0;j<5;j++)
    {
        printf("%d",s[j]);
    }
}
