#include<stdio.h>
int main(void)
{
    int i,d,s;
    char a[100];
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
    if(a[i] > 'a' && a[i] < 'z' || a[i] > 'A' && a[i] < 'z' )
    {
        s=5;
    }
    if(a[i]>'0' && a[i]<'9')
    {
        d=5;
    }
    }
     if(s==d)
     {
         printf("Yes");
     }
     else{
        printf("No");
     }
}
