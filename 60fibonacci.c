#include<stdio.h>
int main(void)
{
    int f=1,s=1,i,c;
    int n;
    scanf("%d",&n);
    printf("%d",f);
    printf("%d",s);
    for(i=0;i<n-2;i++)
    {
    c=f+s;//2
    printf("%d ",c);
    f=s;//1
    s=c;//2
    }

}
