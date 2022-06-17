#include <iostream>
using namespace std;
// global varibele
int a=890;
int main(){
	// scope of a variable al varibale
	// loc

	int a=10;
	// int a;

	float b=90.45;
	int c=79;
	int age=90;
	if(age>=90){//90>=90
		// local variable
		int h=80;
		// int a=34;
		int a=80;
		// ++a;
		::a=::a+10;
		// a=a+80;

		// cout<<a<<endl;//11
		cout<<"value of h is "<<h<<endl;//80
		cout<<"value of a is "<<a<<endl;//890
		// scope resoulation operator ::

		cout<<"value of a is "<<::a<<endl;//900

		cout<<"value of b is "<<b<<endl;//90.45
		cout<<"value of c is "<<c<<endl;//79

	}
	else{
		int c=654;
		int j=6;
		// int h=90;

		// cout<<"value of h is "<<h<<endl;
		cout<<"value of a is "<<a<<endl;
		cout<<"value of b is "<<b<<endl;
		cout<<"value of c is "<<c<<endl;

		cout<<"value of j is "<<j<<endl;

	}

	
		// cout<<"value of h is "<<h<<endl;//error
		cout<<"value of a is "<<::a<<endl;//10
		cout<<"value of b is "<<b<<endl;//90.45
		cout<<"value of c is "<<c<<endl;//79

		// cout<<"value of j is "<<j<<endl;//erroo
		// int x=90;

		// while(){




		// 	while(){

		// 	}
		// 	while(){

		// 	}
		// }




	return 0;
}