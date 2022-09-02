// #include<iostream>
#include "stack.h"


#include<list>
#include<vector>
using namespace std;
int main(){
	// Stack s;
	// Stack<char>s;
	stack<int>s;
	s.push('A');
	s.push('B');
	s.push('C');
	s.push('D');
	s.push('T');
	s.pop();


	// cout<<s.v[1]<<endl;

	while(!s.empty()){
		cout<<s.top()<<" ";//5 without removing 4 3 2
	s.pop();


	}


	cout<<endl;
	
	







	return 0;
}