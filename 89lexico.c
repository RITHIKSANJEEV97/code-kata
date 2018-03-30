#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,temp,j=0;
    char a[100];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        for(j=i+1;j<strlen(a);j++)
        {
        if(a[i] > a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    }
    for(i=0;i<strlen(a);i++)
    {
        printf("%c",a[i]);
    }
}
