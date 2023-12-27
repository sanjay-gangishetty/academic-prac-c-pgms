#include<iostream>
using namespace std;
int main(){
	int input,i=0;
	cout<<"Enter the number you want to get table"<<endl;
	cin>>input;
//for loop
    cout<<"-------------FOR LOOP-------------"<<endl;
	for(int i=1;i<=10;i++){ 
		cout<<input<<" x "<<i<<" = "<<input*i<<endl;
	}
//While loop
    cout<<"-------------WHILE LOOP-------------"<<endl;
   while(i<10){
   	cout<<i<<endl;
   	i++;
   }
//Do while loop
    cout<<"-------------DO-WHILE LOOP-------------"<<endl;
    do{
      cout<<i<<endl;
       i++;	
    }while(i<10);
	return 0;
}
