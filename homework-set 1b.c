// Pgm to take input number from user and & output its cube

#include<stdio.h>

int main() {
	int userInput;
	printf("Enter a number : ");
	scanf("%d", &userInput);
	printf("The cube of the number you entered is : %d",userInput * userInput * userInput);
}
