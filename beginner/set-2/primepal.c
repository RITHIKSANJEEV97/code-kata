#include<stdio.h>
void main()
{
int j,flag=0,i,b;
long int a;
scanf("%d",&a);
int count=0;
    for(j=1;j<=a;j++)
    {
        if (a % j==0)
        {
            count++;
        }
    }
if(count==2)
{
    int i=0,g=0;
    long int b[100000];
    while(a!=0)
    {
        b[i]=a%10;
        i++;
        a=a/10;
        g++;
    }
    for(i=0;i<g;i++)
    {
        if(b[i]!=b[g-i-1])
        {
            flag=1;
        }
    }
    (flag)?printf("no"):printf("yes");
}
else
{
    printf("no");
}
}
