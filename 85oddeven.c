#include<stdio.h>
#include<string.h>
int main(void)
{
    int n,k=0,l=0,i;
    char a[100];
    char b[100];
    char c[100];
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(i & 1)
        {
            b[k]=a[i];
            k++;
        }
        else
        {
            c[l]=a[i];
            l++;
        }
    }
    for(i=0;i<n/2+1;i++)
    {
        printf("%c",c[i]);
    }
    printf(" ");
     for(i=0;i<n/2;i++)
    {
        printf("%c",b[i]);
    }
}

