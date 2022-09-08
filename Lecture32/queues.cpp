#include<iostream>
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
class Queue{
	node*head;
	node*tail;
	int len;
public:
	Queue(){
		head=NULL;
		tail=NULL;
		len=0;
	}


	// push
	// insert at tail
	void push(int d){
		node*n=new node(d);
		// ll khali hai
		if(head==NULL){
			head=n;
			tail=n;
			len++;

		}
		else{
			tail->next=n;
			tail=n;
			len++;
		}

	}


	// pop
	// delete at front
	void pop(){
		// ll khali hai
		if(head==NULL){
			return;
		}
		// ll mai ek single element hai
		else if(head->next==NULL){
			delete head;
			head=NULL;
			tail=NULL;
			len--;
		}
		else{
			// multiple nodes
			node*temp=head;
			head=head->next;
			delete temp;
			temp=NULL;
			len--;
		}

	}


	// front
	int front(){
		if(len!=0){
			return head->data;
		}
	}

	// empty
	bool empty(){

		return len==0;
		// return head==NULL;
	// 	if(len==0){
	// 		return true;
	// 	}
	// 	else{
	// 		return false;
	// 	}

		// if(len==0){
		// 	return true;
		// }
		
		// 	return false;


		// if(head==NULL){
		// 	return true;
		// }
		// return false;
		
	
	}


	// size
	int size(){
		return len;
	}

};
int main(){
	// int a;
	Queue a;
	// queue b;
	a.push(1);
	a.push(5);
	a.push(3);
	a.push(13);
	a.push(34);
	a.push(63);
	a.pop();
	a.pop();

	while(!a.empty()){
		cout<<a.front()<<" ";//3
		a.pop();

	}
	cout<<endl;
	








	return 0;
}