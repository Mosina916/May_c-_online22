#include<iostream>
#include<stack>
using namespace std;
bool isbalanedornot(char arr[]){
	stack<char> s;
	for(int i=0;arr[i]!='\0';i++){


		char cha=arr[i];//
	switch(cha){
		case '(':
		case '{':
		case '[':s.push(cha);
		break;
		case ')':
		if(!s.empty() and s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}
		break;

		case '}':
		if(!s.empty() and s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}
		break;

		case ']':
		if(!s.empty() and s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}
		break;


	}



	}

	if(!s.empty()){
		return false;
	}
	return true;
	




}

int main(){
	// assume string () {} []
	char arr[]="[{(a+b)+c}+d]";
	char arr[]=")";
	if(isbalanedornot(arr)){
		cout<<"balanced "<<endl;
	}
	else{
		cout<<"Not balanced "<<endl;

	}
	


	
	return 0;
}