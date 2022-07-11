#include<iostream>
using namespace std;
void updatea(int*aptr){//pointecout<<a<<endl;r create karne ka *
	*aptr=*aptr+30;//* derefer operator

	cout<<*aptr<<endl;//120


}

int main(){
	int a=90;
	cout<<a<<endl;
	updatea(&a);

	cout<<a<<endl;
	

	

	return 0;
}