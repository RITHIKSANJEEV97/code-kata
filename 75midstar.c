#include<stdio.h>
int main(void)
{
    int b,c;
char a[100];
scanf("%s",&a);
b=strlen(a);
c=b/2;
printf("%d",b);
if(b & 1)
{
    a[c]='*';
}
else
    {
        a[c-1]=a[c]='*';
    }
printf("%s",a);
}
