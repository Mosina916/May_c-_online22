#include <iostream>
using namespace std;
// int sum(int a,int b){
// 	int ts=a+b;
// 	return ts;

// }
// int sum(int a,int b,int c){
// 	int ts=a+b+c;
// 	return ts;
// }
// int sum(int a,int b,int c,int d){
// 	int ts=a+b+c+d;
// 	return ts;
// }

int sum(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0){
	int ts=a+b+c+d+e+f;
	return ts;
}




int main(){
	// int a,b;
	// cin>>a>>b;
	cout<<sum(5,6)<<endl;

	cout<<sum(3,4,5)<<endl;

	cout<<sum(6,1,2,3)<<endl;


	return 0;
}