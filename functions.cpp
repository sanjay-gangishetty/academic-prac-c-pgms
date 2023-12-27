//Functions in cpp
#include<iostream>
using namespace std;
//A normal function without any parameters
hello(){
	cout<<"Hello world"<<endl;
}
//Function with parameters
float arearec(int a){
 return a;
}
int arearec(int l,int b){
 int res = l*b;
 return res;
}
//Function overloading defn is below 2 lines
//no 2 functions be of same name in case they have same name then their dataTypes must be different
//or number of parameters must be different
int main(){
	hello();
	int r = arearec(10);
	cout<<"r is : "<<r<<endl;
	int k = arearec(10,5);
	cout<<"Area of a rectangle is : "<<k<<endl;
	return 0;
}
