//pgm to print smallest number
#include<stdio.h>
int main(){
	int firstNumber,secondNumber,thirdNumber;
	printf("Enter the first number ");
	scanf("%d",&firstNumber);
    printf("Enter the second number ");
	scanf("%d",&secondNumber);
	printf("Enter the third number ");
	scanf("%d",&thirdNumber);
	printf("%d",firstNumber<secondNumber && firstNumber<thirdNumber);
}
