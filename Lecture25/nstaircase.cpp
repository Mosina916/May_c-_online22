#include<iostream>
using namespace std;
// // k-->3
int nstaircase(int n){//2
	// base case
	// if(n==2){
	// 	return 2;

	// }
	// if(n==1 ||n==0){
	// 	return 1;
	// }
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	// recursive case
	return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
}

// k-->4
// int nstaircase(int n){//0
// 	// base case
// 	// if(n==2){
// 	// 	return 2;

// 	// }
// 	// if(n==1 ||n==0){
// 	// 	return 1;
// 	// }

// 	// if(n==3){
// 	// 	return 4;

// 	// }


// 	// if(n==0){
// 	// 	return 1;
// 	// }
// 	// recursive case
	// return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3)+nstaircase(n-4);
// }
int nstaircasewithk(int n,int k){//4

	// base case
	if(n==0){
		return 1;
	}
	if(n<0){
		return 0;
	}

	// recursive case
	int sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+nstaircasewithk(n-i,k);
	}
	return sum;

}
int main(){
	int n;
	cin>>n;//0

	int k;
	cin>>k;

	cout<<nstaircasewithk(n,k)<<endl;
	// cout<<nstaircase(n)<<endl;


	return 0;
}