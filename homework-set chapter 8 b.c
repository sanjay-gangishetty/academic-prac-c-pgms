//pgm to print highest frequency character in a string
#include<stdio.h>
#include<string.h>
int main(){
	int i,n;
	char string[] = "sanjay";
	int a = strlen(string);
	for(i=0;i<=a;i++){
//		printf("%c",string[i]);
		if(string[i]=='a'){
			n=n+1;
			printf("%d",n);
		}
	}
	return 0;
}
