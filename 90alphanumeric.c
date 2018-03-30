#include<stdio.h>
#include<string.h>
int main(void)
{
    int i;
    char a[100];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]>='0' && a[i]<='9')
        {
            printf("%c",a[i]);
        }
    }
}
