#include<stdio.h>
#include<string.h>
int main(void)
{
    int n,i,j,flag=0;
    char a[100];
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
