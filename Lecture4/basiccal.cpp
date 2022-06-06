#include<iostream>
using namespace std;
int main(){
	char ch;
	// if(9){

	// }
	// int age=30;


	// if(0){ //non zero value -->true
	// 	cout<<"heloo";
	// }
	// else{
	// 	cout<<"world";

	// }

// loop
	// ch='+'
	while(true){
		cin>>ch; //X x
	if(ch=='+'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1+n2<<endl;

	}
	else if(ch=='-'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1-n2<<endl;
		
	}

	else if(ch=='/'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1/n2<<endl;
		
	}

	else if(ch=='%'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1%n2<<endl;
		
	}
	else if(ch=='*'){
		int n1,n2;
		cin>>n1>>n2;
		cout<<n1*n2<<endl;
		
	}
	else if(ch=='X'||ch=='x'){
		return 0; //end
	}
	else{
		cout<<"Invalid operation. Try again."<<endl;

	}

	}
	





	return 0;
}