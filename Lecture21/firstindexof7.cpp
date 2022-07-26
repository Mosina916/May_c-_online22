#include <iostream>
using namespace std;
int firstindexof7(int arr[],int n,int i){//4
	// base case
	if(i==n){
		return -1;

	}
	// recursive case
	if(arr[i]==7){
		return i;
	}
	return firstindexof7(arr,n,i+1);//firstindexof7(arr,n,1)	
}
int main(){
	int arr[]={3,2,4,5,6,8};
	int n=sizeof(arr)/sizeof(int);//4
	int ans=firstindexof7(arr,n,0);
	if(ans==-1){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<ans<<endl;

	}



	



	return 0;
}