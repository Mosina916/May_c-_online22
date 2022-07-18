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
	cin>>a>>b;// -5 -3
		// cout<<multiplicationoftwonumbers(a,b)<<endl;
	// both postive
	if(a>=0 and b>=0){
		cout<<multiplicationoftwonumbers(a,b)<<endl;

	}
	// a +ive b -ve
	else if(a>=0 and b<0){
		b=abs(b);//4
		cout<<-multiplicationoftwonumbers(a,b)<<endl;

	}
	// a -ve b +ive
	else if(a<0 and b>=0){
			a=abs(a);//5
		cout<<-(multiplicationoftwonumbers(a,b))<<endl;

	}
	else{
		b=abs(b);//5
		a=abs(a);//3

		cout<<multiplicationoftwonumbers(a,b)<<endl;

	}


	
	



	return 0;
}