//function to find square root of a number
#include<stdio.h>
#include<math.h>
int function(int userInput,int root);//function declaration
int main(){
	int userInput;
	printf("Enter a number : ");
	scanf("%d",&userInput);
	function(userInput,0);
    return 0;
}

int function(int userInput,int root){
	root = sqrt(userInput);;
	printf("The square root of the number is %d", root);
}
