#include<iostream>
using namespace std;

class pass{
	int pword;
	public: 
	void setpw(int ups){
		pword = ups;
		if(pword == ups){
			cout<<"Password is correct, Welcome to SBI "<<endl;
		}
	}
};

int main(){
	pass us1;
	int input;
	cout<<"Enter password"<<endl;
	cin>>input;
	us1.setpw(input);
	return 0;
}
