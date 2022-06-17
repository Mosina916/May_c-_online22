#include <iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//14 -->3.74166
	int times;//3.74
	cin>>times;//4 //3.74


	float inc=1;

	float i=0;
	int count=1;
	// loop
	while(count<=times+1){

		while(i*i<=no){//3.7*3.7 3.71*3.71<=14 3.75*3.75<=14
		// i=i+1;
		i=i+inc;//3.75
	}

	// i=i-1;//3.0
	i=i-inc;//3.8-0.1-->3.7 3.75-0.01-->3.74
	inc=inc/10;//1/10-->0.1/10-->0.01/10
	count=count+1;//4


	}


	cout<<"square root is "<<i<<endl;

	













	return 0;
}