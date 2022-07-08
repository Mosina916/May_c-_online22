#include<iostream>
using namespace std;
int main(){

	int x=10;
	float f=80.45;
	double d=562.635;
	int*xptr=&x;
	float*fptr=&f;
	double*dptr=&d;

	cout<<*xptr<<endl;//* derereference operato
	cout<<*fptr<<endl;
	cout<<*dptr<<endl;


	int**gptr=&xptr;//double pointer

	cout<<**gptr<<endl;

	int***kptr=&gptr;//triple pointer

	cout<<***kptr<<endl;
	// int****hptr=&kptr;

	// cout<<xptr<<endl;
	// cout<<kptr<<endl;
	// cout<<gptr<<endl;
	// cout<<hptr<<endl;


	// int *xptr;
	// int *gptr;
	// int *rty;

	// int*xptr,*gptr,*rty;














	



























	

	return 0;
}