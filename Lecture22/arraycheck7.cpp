#include <iostream>
using namespace std;
int lastindexof7(int arr[],int n,int i){
	// base case
	if(n==0){
		return -4;
	}

	// recursive case
	if(arr[i]==7){
		return i;

	}
	return lastindexof7(arr,n-1,i-1);
}

void allindicesof7(int arr[],int n,int i){
	// base case
	if(i==n){
		return;
	}



	// recursive case
	if(arr[i]==7){
		cout<<i<<" ";
	}
	allindicesof7(arr,n,i+1);

}

int main(){
	int arr[]={3,7,1,7,5,4,3,3,2,2,7,5,3,3,6};
		// int arr[]={3,9,1,2};

	// int arr[]={3,7,1,7,6};
	int n=sizeof(arr)/sizeof(int);//4

	// int ans=lastindexof7(arr,n,n-1);


	// if(ans!=-4){
	// 	cout<<"7 is present at index "<<ans<<endl;
	// }
	// else{
	// 	cout<<"7 is not present"<<endl;

	// }

	allindicesof7(arr,n,0);



	



	return 0;
}