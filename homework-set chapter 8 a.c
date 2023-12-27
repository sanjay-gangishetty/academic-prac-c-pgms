//pgm to convert all lowercase vowels to uppercase in a string
#include<stdio.h>
int main(){
	int ch,i,a;
	char greetings[] = "aeiou";
	ch = strlen(greetings);
	for(i=0;i<=ch;i++){
		if(greetings[i]=='a'||greetings[i]=='e'||greetings[i]=='i'||greetings[i]=='o'||greetings[i]=='u'){
			a = toupper(greetings[i]);
			printf("%c\n",a);
		}
	}
	return 0;
}
