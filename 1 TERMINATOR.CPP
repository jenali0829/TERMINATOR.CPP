#include<iostream>

using namespace std;

main(){
	
	int a=10;
	int b=0;
	char error[]="cannot divide by zero";
	
	cout<<"Enter a";
	cin>>a;
	
	cout<<"Enter b";
	cin>>b;
	
	try{
		if(b==0){
			throw error;
			
		}
		else{
			int c=a/b;
			cout<<c<<endl;
		}
	}
	
	catch(char arr){
		cout<<arr;
	}
}
