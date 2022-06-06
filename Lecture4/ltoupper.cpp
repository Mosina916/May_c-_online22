#include <iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;//'C'

	// if(ch>='A'&& ch<='Z'){ //implicit type casting
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>='a'&&ch<='z'){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"it is a different char"<<endl;

	// }


	// if(ch>=65&& ch<=90){ //implicit type casting
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(ch>=97&&ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"it is a different char"<<endl;

	// }


		if(isupper(ch)){ //implicit type casting
		cout<<"UPPERCASE"<<endl;
	}
	else if(islower(ch)){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"it is a different char"<<endl;

	}





	
	
	return 0;
}