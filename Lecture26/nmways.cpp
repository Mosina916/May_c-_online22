#include<iostream>
using namespace std;
int noofways(int n,int m){
	// base case
	// if(n==0){
	// 	return 1;
	// }
	// if(m==0){
	// 	return 1;
	// }
	if(n<0){
		return 0;
	}
	if(m==0 and n==0){
		return 1;
	}
	if(m<0){
		return 0;
	}


	// recursive case

	return noofways(n-1,m)+noofways(n,m-1);

}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<noofways(n,m)<<endl;
	// cout<<noofways(n-1,m-1)<<endl;


	return 0;
}