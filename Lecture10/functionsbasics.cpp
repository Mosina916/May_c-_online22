#include <iostream>
using namespace std;
// return type nameoffunction(){
// 	// task
// }

// void printstatement(){
// 		cout<<"hello "<<endl;
// 		cout<<"hi "<<endl;	
// 		cout<<"coding blocks"<<endl;
// 		cout<<"hello world"<<endl;

// }

// no return nd no argument
void sumoftwonumber(){
	int a,b;
	cin>>a>>b;
	int sum=a+b;
	cout<<sum<<endl;

}
// int divis(int q,int h);//forward decleartion
// return but no arguments
float diffre(){
	int x;
	float y;
	cin>>x>>y;//30 3.3
	float dif=x-y;
	return dif;
}
// no return  but with argument
void mult(int a,float f){
	float mul=a*f;
	// cout<<'hdfhvds sjv'
	cout<<mul<<endl;
}
// return aur argument
// int divis(int q,int h){
// 	int res=q/h;

// 	return res;
// }
int divis(int q,int h);//
int main(){

	cout<<diffre()<<endl;
	cout<<diffre()<<endl;
	cout<<diffre()<<endl;

	// fgt();
	// mult();
	// int c
	int p,q;
	cin>>p>>q;

	cout<<divis(p,q)<<endl;
	cout<<divis(60,10)<<endl;
	cout<<divis(60,6)<<endl;
	// sum 
	sumoftwonumber();//function call 
	// diff



	cout<<diffre()<<endl;//6.7
	int x;
	float y;
	cin>>x>>y;//4 2.3

	mult(x,y);
	int a,b;
	cin>>a>>b;
	// cout<<3.7

	divis(a,b);





	// mult(5,7.7);







	// for(int i=1;i<=5;i++){
		// cout<<"hello "<<endl;
		// cout<<"hi "<<endl;
		// cout<<"coding blocks"<<endl;
		// cout<<"hello world"<<endl;

	// }

		// int a=10;
		// int b=80;


		// cout<<a<<endl;//10

		// // nameofthefunction();
		// printstatement();


		// // cout<<"hello "<<endl;
		// // cout<<"hi "<<endl;
		
		// // cout<<"coding blocks"<<endl;
		// // cout<<"hello world"<<endl;
		// cout<<b<<endl;//10


		// cout<<a<<endl;//10
		// cout<<b<<endl;//10
		// printstatement();
		// // cout<<"hello "<<endl;
		// // cout<<"hi "<<endl;
		
		// // cout<<"coding blocks"<<endl;
		// // cout<<"hello world"<<endl;

		// // cout<<"hello "<<endl;
		// // cout<<"hi "<<endl;
	
		// // cout<<"coding blocks"<<endl;
		// // cout<<"hello world"<<endl;

		// printstatement();
		// cout<<b<<endl;//10
		// cout<<a<<endl;//10



	return 0;
}

int divis(int q,int h){
	int res=q/h;

	return res;
}