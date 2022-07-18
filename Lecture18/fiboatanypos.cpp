#include <iostream>
using namespace std;
int fiboofpos(int pos){//-1
	// base case /stopping condition
	// if(pos<0){
	// 	return -1;
	// }
	if(pos==1){
		return 1;
	}
	if(pos==0){
		return 0;
	}


	// recursive case
	// int ans1=fiboofpos(pos-1);//2
	// int ans2=fiboofpos(pos-2);//1


	// // // calculate the final ans
	// int finalans=ans1+ans2;//3
	// return finalans;


	// without storing
	return fiboofpos(pos-1)+fiboofpos(pos-2);

}

int main(){
	int pos;
	cin>>pos;//-1
	cout<<fiboofpos(pos)<<endl;
	



	return 0;
}