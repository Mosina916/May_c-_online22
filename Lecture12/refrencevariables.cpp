#include <iostream>
using namespace std;

int main(){
	int a=50;
	int &b=a;
	int &y=a;
	a=a+90;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<y<<endl;

	
	
	return 0;
}