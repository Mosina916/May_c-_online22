#include<iostream>
#include<vector>
using namespace std;
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;

	}

};

class Stack{
	node*head;
	int len;

public:
	Stack(){
		head=NULL;
		len=0;

	}

	// push

	// insert at front
	void push(int data){
		node*n=new node(data);
		n->next=head;

		head=n;
		len++;
		// l.push_front(data);



	}

	// pop
	// delete at front

	void pop(){
		if(head==NULL){
			return;
		}
		else if(head->next==NULL){
			delete head;
			head=NULL;
			len--;
		}
		else{
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			len--;
		}

	}



	// top
	int top(){
		return head->data;
	}

	// size
	int size(){
		return len;
	}

	// empty
	bool empty(){
		// if(head==NULL){
		// 	return true;
		// }
		// else{
		// 	return false;
		// }
		// if(len==0){
		// 	return true;
		// }
		// else{
		// 	return false;
		// }

		return len==0;
	}
};
int main(){
	Stack s;
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