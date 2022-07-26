#include <iostream>
using namespace std;
bool is7presentornot(int arr[],int n,int key){
	// base case
	if(n==0){
		return false;
	}


	// recursive case
	if(arr[0]==key){
		return true;
	}
	return is7presentornot(arr+1,n-1,key);
}

int main(){
	int arr[]={3,4,17,6,3,5,17,6,43,23,23,2};
	int n=sizeof(arr)/sizeof(int);//4
	int key;
	cin>>key;//3

	

	if(is7presentornot(arr,n,key)){
		cout<<"key is present"<<endl;

	}
	else{
			cout<<"key is not present"<<endl;

	}



	



	return 0;
}