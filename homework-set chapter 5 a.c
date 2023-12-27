//function to find sum of digits of a number
#include<stdio.h>
int function(int n,int sum,int m)//function declaration

//main function
int main(){
	int userInput;
	printf("Enter a number : ");
	scanf("%d",&userInput);
	function(userInput,0,0);
    return 0;
}

//function starts here
int function(int n,int sum,int m){
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}   
printf("Sum is=%d",sum);    
return 0; 
}
