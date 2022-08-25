#include<iostream>
using namespace std;
class node{
public:
	int d;
	node*next;//self refrential class
	node(int data){
		d=data;
		next=NULL;


	}


};
int main(){
	// int x;
	// float f;

	node n1(3);//n1 n2 is an object 
	node n2(6);
	n1.next=&n2;

	// cout<<n1.d<<" "<<n2.d<<endl;
	// i want to print both n1 data and n2 data with the help of n1
	cout<<n1.d<<" ";
	// (*n1.next)-->n2
	// cout<<(*n1.next).d<<endl;


	// n1.next-->address

	cout<<n1.next->d<<endl;




}