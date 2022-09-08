#include<iostream>
#include<queue>
using namespace std;
class Stack{
	queue<int> q1;
	queue<int> q2;

public:
	// push
	void push(int d){
		if(q1.empty() and q2.empty()){
			// donu mai se ek kisi queue ko use karlo data daalne k lye
			q1.push(d);

		}
		else if(!q1.empty() and q2.empty()){
			q1.push(d);

		}
		else{
			q2.push(d);


		}


	}

	// pop
	void pop(){
		if(q1.empty() and q2.empty()){
			return;
		}
		else if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
			q1.pop();

			}
			q1.pop();
		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();

			}
			q2.pop();
		}
	}


	// top

	int top(){
		int topele=INT_MAX;
		if(q1.empty() and q2.empty()){
			return topele;
		}


	if(!q1.empty() and q2.empty()){
			while(q1.size()>1){
				q2.push(q1.front());
			q1.pop();

			}
			int topele=q1.front();//1
			q2.push(q1.front());

			q1.pop();
			// return topele;
		}
		else{
			while(q2.size()>1){
				q1.push(q2.front());
				q2.pop();

			}
			int topele=q2.front();
			q1.push(q2.front());
			q2.pop();

			// return topele;
		}


		return topele;

	}




	// empty

	bool empty(){
		return q1.size()==0 and q2.size()==0;
	}


	// size
	int size(){
		// if(q1.empty() and q2.empty()){
		// 	return 0;
		// }
		// else if(!q1.empty() and q2.empty()){
		// 	return q1.size();
		// }
		// return q2.size();

		return q1.size()+q2.size();
	}
};


int main(){
	Stack s;
	s.push(9);
	s.push(3);
	s.push(1);
	s.push(16);
	s.pop();
	s.push(30);
	s.pop();

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();

	}
	cout<<endl;


	






	return 0;
}