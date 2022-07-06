#include <iostream>
using namespace std;
void update(int a){
	a=a+10;
	cout<<"value of a inside update fun is "<<a<<endl;//20
}
int main(){
	int a=10;
	cout<<"value of a is "<<a<<endl;//10
	update(a);//function invoking/calling
	// if(){
	// 	int a=10+10;
	// }
	cout<<"value of a after update is "<<a<<endl;//10
	
	return 0;
}