//checking weather a number is prime or not
#include<stdio.h>

int main(){
	int n;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	if(n%2==0){
		printf("The entered number is not a prime number.");
	}else{
		printf("The entered number is a prime number.");
	}
	return 0;
}


