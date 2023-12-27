//pgm to find the maximum number b/w two numbers using a pointer
#include<stdio.h>
int main(){
	int *ptr1 , *ptr2, userInput1,userInput2;
	printf("Enter number one : ");
	scanf("%d",&userInput1);
	printf("Enter number two : ");
	scanf("%d",&userInput2);
	ptr1 = &userInput1;
    ptr2 = &userInput2;
    printf("first number : %u\t second number : %u\t\n",*ptr1,*ptr2);
    if(*ptr1>*ptr2){
    	printf("first number %u is greater",*ptr1);
	}else if(*ptr1<*ptr2){
		printf("second number %u is greater",*ptr2);
	}else{
		printf("both numbers are equal");
	}
}
