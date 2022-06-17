#include <iostream>
using namespace std;
int main(){
	int no;
	cin>>no;
	// int no=3214;//-->4123
	int reverse=0;

	// while(no>0){
	// 	int ld=no%10;
	// reverse=reverse*10+ld;
	// no=no/10;

	// }

	for(;no>0;no=no/10){
			int ld=no%10;
		reverse=reverse*10+ld;

	}

	cout<<"reverse no is "<<reverse<<endl;
	






	return 0;
}