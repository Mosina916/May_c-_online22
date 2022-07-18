#include <iostream>
using namespace std;
int multiplicationoftwonumbers(int a,int b){ //0 0
	// base case
	if(b==0){
		return 0;
	}

	// recursive case
	return a+multiplicationoftwonumbers(a,b-1);//2 3-->6
	//0+0+0+0
}

int main(){
	int a,b;
	cin>>a>>b;//0 3

	cout<<multiplicationoftwonumbers(a,b)<<endl;
	



	return 0;
}