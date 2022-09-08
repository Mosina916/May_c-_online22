#include<iostream>
using namespace std;
class Queue{

	int *arr;
	int f;
	int r;
	int cs;
	int ts;
	public:
// int n;
// cin>>n;
// int arr[s];
		// int *arr=new int[s];
	Queue(int s){
		arr=new int[s];
		ts=s;//5
		cs=0;
		f=0;
		// r=-1;
		r=s-1;//4

	}

	

	// push
	void push(int d){
		if(cs<ts){
			r=(r+1)%ts;
		arr[r]=d;
		cs++;

		}
		else{
			cout<<"overflow"<<endl;

		}
		


	}
	
	// pop
	void pop(){
		if(cs>0){
			f=(f+1)%ts;
		cs--;


		}
		else{
			cout<<"underflow"<<endl;
		}
		

	}
	

	// front

	int front(){
		if(cs>0){
			return arr[f];

		}
		// return -1;
		

	}


	// empty
	bool empty(){
		return cs==0;
	}
	
	// size
	int size(){
		return cs;
	}
	

};


int main(){
	// int a;

	Queue a(5);
	// queue b;

	a.push(1);
	a.push(5);
	a.push(3);
	// a.arr[1]=67;
	a.push(13);
	a.push(34);
	a.push(63);//overflow
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();//underfolow

	a.push(1);
	a.push(5);
	a.push(3);
	a.push(13);
	a.push(34);

	while(!a.empty()){
		cout<<a.front()<<" ";//3
		a.pop();

	}
	cout<<endl;
	








	return 0;
}