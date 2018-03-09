#include<stdio.h>
#include<string.h>
void main(){
    int i,c,x,y,j,k;
char a[100],b[100],d[100];
scanf("%s",a);
scanf("%s",b);
x=strlen(a);
y=strlen(b);
c=x+y;
for(i=0;i<a;i++)
{
    d[i]=a[i];
}
for(j=a;j<c-1;j++)
{
    d[j]=b[j];
}
for(k=0;k<c-1;k++)
{
    printf("%c",d[i]);
}
}
