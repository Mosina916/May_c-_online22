#include<iostream>
using namespace std;
int main(){

	int x=10;
	float f=80.45;
	double d=562.635;
	// cout<<"value of x is "<<x<<endl;
	// cout<<"value of f is "<<f<<endl;
	// cout<<"value of d is "<<d<<endl;

	// cout<<"value of x is "<<sizeof(x)<<endl;//4
	// cout<<"value of f is "<<sizeof(f)<<endl;//4
	// cout<<"value of d is "<<sizeof(d)<<endl;//8


	// cout<<"adress of x is "<<&x<<endl;//&x dega x kis jagah pe bana hai uska address
	// cout<<"adress of f is "<<&f<<endl;
	// cout<<"adress of d is "<<&d<<endl;


	// cout<<"adress of x is "<<sizeof(&x)<<endl;//&x dega x kis jagah pe bana hai uska address
	// cout<<"adress of f is "<<sizeof(&f)<<endl;
	// cout<<"adress of d is "<<sizeof(&d)<<endl;


	// int*xptr=&x;
	// int* xptr=&x;
	// int *xptr=&x;

	// cout<<xptr<<endl;
	// cout<<&x<<endl;

	// // xptr is same AS &x

	// float*fptr=&f;
	// cout<<fptr<<endl;
	// cout<<&f<<endl;

	// double*dptr=&d;

	// cout<<dptr<<endl;
	// cout<<&d<<endl;


	// cout<<sizeof(fptr)<<endl;
	// cout<<sizeof(dptr)<<endl;
	// cout<<sizeof(xptr)<<endl;



	char ch='R';

	cout<<"value of ch is "<<ch<<endl;//R
	cout<<"size of ch is "<<sizeof(ch)<<endl;//1

	// cout<<"adress of ch is "<<&ch<<endl;//.  R?G?z??@XiI?f?B

	// still to get addreess of &ch we fool the compiler

	// cout<<"adress of ch is "<<(int*)&ch<<endl;

	cout<<"adress of ch is "<<(float*)&ch<<endl;
	// cout<<"adress of ch is "<<(double*)&ch<<endl;

	cout<<"adress of ch is "<<(void*)&ch<<endl;


	cout<<"sizeof of &ch is "<<sizeof(&ch)<<endl;//8































	

	return 0;
}