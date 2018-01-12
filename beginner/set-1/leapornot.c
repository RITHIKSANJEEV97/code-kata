#include<stdio.h>
#include<string.h>
void main()
{
int year;
scanf("%d",&year);
year%400==0?(year%4==0?printf("yes"):printf("no")):(year%100==0?printf("no"):printf("yes"));
}
