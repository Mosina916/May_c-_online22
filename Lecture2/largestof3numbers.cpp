#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	// assume a b c they are differnt
	cin>>a>>b>>c; //2 4 3
	if(a>b && a>c){
		cout<<"a is largest"<<endl;
	}
	else if(b>a && b>c){
		cout<<"b is largest"<<endl;

	}
	else{
		cout<<"c is largest"<<endl;

	}
	// else if(c>a and c>b){
	// 	cout<<"c is largest"<<endl;

	// }







	return 0;
}