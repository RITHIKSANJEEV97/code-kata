#include<stdio.h>
int main(void)
{
    int c=1,i;
    char a[100];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}
