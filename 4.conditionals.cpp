#include<iostream>
using namespace std;
int main(){
	int age,type,instant,charge;
	cout<<"----------------RTO----------------"<<endl;
	cout<<"Enter your age"<<endl;
	cin>>age;
	cout<<"Your age is : "<<age<<endl;
	if(age>=18){
		cout<<"You can apply for your licence"<<endl;
		cout<<"Do you want 2+4 wheeler or only 2 wheeler licence"<<endl;
		cout<<"For 2+4 enter 1 and for 2 only enter 2"<<endl;
		cin>>type;
		if(type==1){
			cout<<"Pay 2000 and grab your 2 wheeler licence"<<endl;
			cout<<"If you want instantly press 1 or to exit press any number"<<endl;
			cin>>instant;
			if(instant==1){
			cout<<"Note that you need to pay 500 extra for instant licence"<<endl;
			cout<<"If you are interested press 1 or if you want exit press 0"<<endl;
			cin>>charge;
			if(charge==1){
				cout<<"Pay and take the receipt"<<endl;
			}else{
				cout<<"----------------thanks for visiting----------------"<<endl;
			}
			}else{
			    cout<<"----------------thanks for visiting----------------"<<endl;	
			}
		}else if(type==2){
			cout<<"Pay 4000 and grab your 2+4 wheeler licence"<<endl;
		}else{
		    cout<<"Please enter correct value"<<endl;	
		}
	}
	else{
		cout<<"You can't apply for your licence"<<endl;
	}
	return 0;
}
