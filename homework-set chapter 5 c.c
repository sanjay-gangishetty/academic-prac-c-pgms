//function to print 'hot' or 'cold' depending on the temperature user enters
#include<stdio.h>
int function(int userInput,int temp);
int main(){
	int userInput;
	printf("Enter the temperature : ");
	scanf("%d",&userInput);
	function(userInput,0);
    return 0;
}
int function(int userInput,int temp){
	if(userInput <= 30){
		printf("The weather is COLD");
	}else if(userInput >= 30){
		printf("The weather is HOT");
	}
}
