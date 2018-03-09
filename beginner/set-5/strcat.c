#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char b[100];
	int l,n,i;
	int t;
	scanf("%s",a);//ghj
	scanf("%s",b);//iko
	 l=strlen(a);//3
     n=strlen(b);//3
     for(i=0;i<n;i++)//3
        {
     	a[l]=b[i];//iko
     	l++;

	 }
	 for(i=0;i<l;i++){
	 	printf("%c",a[i]);//ghj
	 }


}
