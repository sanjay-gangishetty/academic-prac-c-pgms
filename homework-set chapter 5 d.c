//creating a power function
#include<stdio.h>
int function(int userInput,int power,int result);
int main(){
	int userInput,power;
	printf("Enter the number : ");
	scanf("%d",&userInput);
	printf("Enter the power of the number : ");
	scanf("%d",&power);
	function(userInput,power,0);
    return 0;
}

int function(int userInput,int power,int result){
	for(power; power>0; power--){
    result = power * userInput;
    printf("The result is %d ", result);
}
return result;
}


