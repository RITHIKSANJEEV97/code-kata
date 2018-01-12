#include<stdio.h>
void main()
{
    char a;
    scanf("%c",&a);
    (a>='a' && a<='z' || a>='A' && a<='Z')?printf("Alphabet"):printf("No");
}
