#include<iostream>

using namespace std;

main(){
	
	char j[100];
	char k[]="a password cannot be validate if it doesnot contains an uppercase latter";
	
	cout<<"Enter j";
	cin>>j;
	
	try{
		if(j[100]==('A'||'B'||'c'||'D'||'E'||'F'||'G'||'H'||'I'||'J'||'K'||'L'||'M'||'N'||'O'||'P'||'Q'||'R'||'S'||'T'||'U'||'V'||'W'||'X'||'Y'||'Z')){
		
		throw k;
		cout<<"This password is  valid";
		}
	
	else{
			
			cout<<"This password is not valid";
		}
}

	catch(char []){

		cout<<j;
	}
}
		

 	
