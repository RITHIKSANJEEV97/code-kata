#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a-b;
    if(c & 1)
    {
        printf("Odd");
    }
    else{
        printf("Even");
    }
}
