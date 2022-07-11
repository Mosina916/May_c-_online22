#include<iostream>
using namespace std;
int main(){


	int x=10;
	int *xptr=&x;
	cout<<xptr<<endl;//0x7ffedfdcb938
	cout<<xptr+1<<endl;//0x7ffedfdcb93c
	cout<<xptr+2<<endl;//0x7ffedfdcb940
	cout<<xptr+3<<endl;

	int x=10;

	// int *xptr=&x;//initilization
	int *xptr=NULL;
	xptr=&x;

	























	

	return 0;
}