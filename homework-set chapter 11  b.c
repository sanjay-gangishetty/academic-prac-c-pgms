////Allocating memory for 500 integers using calloc & then store first 500 natural no.s in that space
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr,i,n;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	ptr = (int*)malloc(n * sizeof(int));
	if(ptr == NULL){
		printf("Memory not allocated.\n");
	}else{
	    printf("Memory is successfully allocated.\n");	
	}
	printf("The elements of the array are :- \n");
	for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;//adding 1 here because the initialising starts with zero
			printf("%d\n",ptr[i]);
 	}
	return 0;
}



