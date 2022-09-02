#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
	stack<int>s;
	s.push(2);
	s.push(3);
	s.push(6);
	s.push(5);
	s.push(1);
	s.push(0);

	while(!s.empty()){
		cout<<s.top()<<" ";
	s.pop();

	}

	cout<<endl;
	


	
	return 0;
}