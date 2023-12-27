//pgm to open a file and replace the data with no. of vowels in the string
#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0;
	FILE *fptr;
	fptr = fopen("test.txt","r");
	int a;
	fscanf(fptr,"%c",&a);
	fclose(fptr);
	char word[] = "SANJAY" ;
	for(i=0;i<strlen(word);i++){
		printf("%c",word[i]);
		if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
			count++;
		}
	}
	printf("\n The no. of vowels present in the string are : %d",count);
	fptr = fopen("test.txt","w");
	fprintf(fptr,"The no. of vowels in the string are : %d",count);
	fclose(fptr);
	return 0;
}
