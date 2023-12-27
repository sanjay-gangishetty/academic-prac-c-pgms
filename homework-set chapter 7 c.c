//pgm to insert an element at the end of the array
#include <stdio.h>

int main(){
	int i;int n;int lastElement;
	int arr[100];
	printf("enter the number of elements you want in array : ");
	scanf("%d",&n);
	arr[n];
	for(i=0;i<n;i++){
		printf("Enter value for index %d ",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the element you want to add at last : ");
	scanf("%d",&lastElement);
	arr[n] = lastElement;
	printf("-----------------values entered----------------------\n ");
	for(i=0;i<n+1;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
