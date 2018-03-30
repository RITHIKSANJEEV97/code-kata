#include<stdio.h>
int main(void)
{
    char a[100];
    gets(a);
    int i,f=0;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            f=1;
            break;
        }
    }
    if(f)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }
}
