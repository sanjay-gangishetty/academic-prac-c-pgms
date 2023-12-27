//pgm to read a string from a file and output to the user
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	FILE *fptr;
	fptr = fopen("test.txt","r");
	printf("%c",fgetc(fptr));
	fclose(fptr);
	return 0;
}

