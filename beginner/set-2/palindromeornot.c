#include<stdio.h>
#include<string.h>
void main()
{
char a[100000];
int b,i,flag=0;
scanf("%s",a);
b=strlen(a);
for(i=0;i<b;i++)
{
    if(a[i]!=a[b-i-1])
    {
        flag=1;
    }
}
(flag?printf("no"):printf("yes"))
}
