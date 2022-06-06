#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int tr;
	cin>>tr;//1
	if(tr==1){
		cout<<0<<endl;
		return 0;
	}
	else{

	cout<<0<<endl;
	cout<<1<<'\t'<<1<<endl;
	int a=1;
	int b=1;
	int c=a+b;//1+1 -->2

		int rowno=3;
	while(rowno<=tr){//4<=4
		// ========================
	int coun=1;
	while(coun<=rowno){
		// cout<<'*'<<'\t';
		cout<<c<<'\t';
		a=b;
		b=c;
		c=a+b;

		coun=coun+1;//4
	}
	cout<<endl;
	rowno=rowno+1;//5
	// ========================

	}


	}

	// int a=0;
	// int b=1;
	
	return 0;
	// exit 0
}