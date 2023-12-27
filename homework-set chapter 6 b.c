//pgm to print the elements of the array in reverse order
#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[] = {1, 2, 3, 4, 5}; 
	int i;    
        
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    printf("Original array: \n");    
    for (i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (i = length-1; i >= 0; i--) {     
        printf("%d ", arr[i]);     
    }     
    return 0;    
}    
