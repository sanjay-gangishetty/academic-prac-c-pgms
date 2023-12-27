//format the info(name,marks,cgpa,course) of 5 students in a table like structure in a file
#include<stdio.h>
#include<string.h>
struct stu{
	 char name;
	 int marks;
	 float cgpa;
	 char course
	};
int main(){
	struct stu s1 = {"sanjay",90,8.9,"mca"};
	//to open a file to READ
	FILE *fptr;
	//to open a file to write
	fptr = fopen("test.txt","w");
	fprintf(fptr,"%s\t %d\t %f\t %c\t",s1.name,s1.marks,s1.cgpa,s1.course);
	fclose(fptr);
return 0;
}
