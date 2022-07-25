#include<iostream>
using namespace std;
bool isarraysortedornot(int arr[],int n){
	// base case
	if(n==1){
		return true;
	}
	// recursive case
	if(arr[0]<=arr[1] and isarraysortedornot(arr+1,n-1) ){ //2
		return true;
	}
	return false;
}

bool isarraysortedornot2(int arr[],int n){
	// base case
	if(n==1){
		return true;
	}


	// recursive case
	// if( arr[n-2]<=arr[n-1] and isarraysortedornot2(arr,n-1)){

	if(isarraysortedornot2(arr,n-1) and  arr[n-2]<=arr[n-1]){
		return true;
	}
	return false;
}

bool isarraysortedornot3(int arr[],int n,int i){
	// base case
	if(i==n-1){
		return true;
	}


	// recursive case
	if(arr[i]<=arr[i+1] and isarraysortedornot3(arr,n,i+1)){
		return true;
	}

	return false;

}
int main(){
	// int arr[]={7,7,8,11,13};
	int arr[]={2,3,7,5,7,9};
	int n=sizeof(arr)/sizeof(int);
	// if(isarraysortedornot(arr,n)){
	// 	cout<<"array is sorted"<<endl;

	// }
	// else{
	// 	cout<<"array is not sorted"<<endl;

	// }


	// if(isarraysortedornot2(arr,n)){
	// 	cout<<"array is sorted"<<endl;

	// }
	// else{
	// 	cout<<"array is not sorted"<<endl;

	// }

	if(isarraysortedornot3(arr,n,0)){
		cout<<"array is sorted"<<endl;

	}
	else{
		cout<<"array is not sorted"<<endl;

	}


	return 0;
}