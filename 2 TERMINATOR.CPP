#include<iostream>

using namespace std;

main(){
	
	int age;
	char a[]="a person cannot be able to vote if his/her age is less than 18";
	
	cout<<"Enter age";
	cin>>age;
	
	try{
		if(age<18){
			throw a;
			
		}
			else{

			cout<<"a person is able to vote";
		}
	}

	catch(char []){

		cout<<a;
	}


}
