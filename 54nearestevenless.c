#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n & 1)
    {
        printf("%d",n-1);
    }
    else{
        printf("%d",n);
    }
}
