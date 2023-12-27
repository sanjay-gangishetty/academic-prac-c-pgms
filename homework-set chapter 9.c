//system to store info of all students,teachers & staff of ur clg in the form of structures
#include<stdio.h>
struct studentmca{
		char name[100];
		int roll;
		float cgpa;
	};
	struct teachersmca{
		char name[100];
		int id;
		char subject[100];
	};
	struct facultymca{
		char name[100];
		int id;
		char designation[100];
	};
	struct cgpa{
		int sub1;
		int sub2;
		int sub3;
		int sub4;
		int sub5;
		int sub6;
	};
void studentPrinting(struct studentmca s1);
int cgpaCalculation(struct cgpa s1);
int main(){
	int i ;
	struct studentmca s1 = {"Sanjay", 1000, 8.5};
	studentPrinting(s1);
	struct teachersmca t1 = {"os-mam", 01,"os"};
	printf("Teachers\n t1 name = %s\n t1 id = %d\n t1 subject = %s\n\n",t1.name,t1.id,t1.subject);
	struct facultymca f1 = {"rr",101,"sweeper"};
	printf("Faculty\n f1 name = %s\n f1 id = %d\n f1 designation = %s\n\n",f1.name,f1.id,f1.designation);
	struct cgpa stu1;
	printf("enter marks of subject 1 : ");
	scanf("%d",&stu1.sub1);
	printf("enter marks of subject 2 : ");
	scanf("%d",&stu1.sub2);
	printf("enter marks of subject 3 : ");
	scanf("%d",&stu1.sub3);
	printf("enter marks of subject 4 : ");
	scanf("%d",&stu1.sub4);
	printf("enter marks of subject 5 : ");
	scanf("%d",&stu1.sub5);
	printf("enter marks of subject 6 : ");
	scanf("%d",&stu1.sub6);
	cgpaCalculation(stu1);
	return 0;
};

void studentPrinting(struct studentmca s1){
	printf("Students\n s1 name = %s\n s1 roll = %d\n s1 cgpa = %f\n\n",s1.name,s1.roll,s1.cgpa);
}

int cgpaCalculation(struct cgpa stu1){
	float totalMarks = stu1.sub1 + stu1.sub2 + stu1.sub3 + stu1.sub4 + stu1.sub5 + stu1.sub6;
	float cgpa = totalMarks/6;
	printf("cgpa is : %f ",cgpa);
	return 0;
};
