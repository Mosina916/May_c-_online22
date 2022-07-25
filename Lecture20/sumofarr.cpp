#include<iostream>
using namespace std;
int sumofarr(int arr[],int n){//n==1
	// base case
	if(n==1){
		return arr[0];
	}


	// recursive case
	return sumofarr(arr,n-1)+arr[n-1];//15
}

int sumofarr2(int arr[],int n){
	// base case
	if(n==1){
		return arr[n-1];
	}


	// recursive case
	return arr[0]+sumofarr2(arr+1,n-1);
}
int main(){
	int arr[]={3,4,2,6};
	int n=sizeof(arr)/sizeof(int);//4
	cout<<sumofarr2(arr,n)<<endl;


	return 0;
}