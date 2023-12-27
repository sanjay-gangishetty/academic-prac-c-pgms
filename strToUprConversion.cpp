#include<iostream>
#include <cstring>
using namespace std;
int main(){
	char arr[] = "sanjay";
	
	for(int x=0; x<=strlen(arr);x++){
		putchar(toupper(arr[x]));
	}
	
	return 0;
}
