#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char b[100];
	int l,n,i;
	int s1=0;
	int s2=0;
	scanf("%s",a);
	scanf("%s",b);
	 l=strlen(a);
     n=strlen(b);
     for(i=0;i<l;i++){
     	s1=s1+a[i];
	 }
	  for(i=0;i<n;i++){
     	s2=s2+a[i];
	 }
	 if(s1>s2){
	 	printf("%s\n",a);
	 }
	 else{
	 	printf("%s\n",b);
	 }
}
