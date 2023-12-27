//pgm to print the avg of three numbers
#include<stdio.h>
int main(){
	int firstNumber,secondNumber,thirdNumber,average;
	printf("Enter the first number ");
	scanf("%d",&firstNumber);
    printf("Enter the second number ");
	scanf("%d",&secondNumber);
	printf("Enter the third number ");
	scanf("%d",&thirdNumber);
	average = (firstNumber+secondNumber+thirdNumber)/3;
	printf("Average : %d",average);
}
