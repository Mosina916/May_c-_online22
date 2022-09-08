#include<iostream>
#include<queue>
using namespace std;



int main(){
	// int a;

	queue<int>a;
	// queue b;

	a.push(1);
	a.push(5);
	a.push(3);
	// a.arr[1]=67;
	a.push(13);
	a.push(34);
	a.push(63);
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.pop();//underfolow //empty
	a.pop();//sf
	a.pop();
	a.push(8);


	a.push(1);
	a.push(5);
	// a.push(3);
	// a.push(13);
	// a.push(34);

	while(!a.empty()){
		cout<<a.front()<<" ";//3
		a.pop();

	}
	cout<<endl;
	








	return 0;
}