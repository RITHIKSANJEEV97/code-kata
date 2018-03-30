#include<stdio.h>
void main()
{
    char a[100];
    int n,f=0,i;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    if(a[i]!=a[n-i-1])
    {
        f=1;
        break;
    }}
    if(f)
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
}
