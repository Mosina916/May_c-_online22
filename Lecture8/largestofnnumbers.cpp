#include <iostream>
using namespace std;
int main(){
	// linear search 
	// 1 2 3 4 5 6 7 8
	int arr[]={13,-1,16,19,70,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,};
	int n=sizeof(arr)/sizeof(int);
	int largest=arr[0];

	for(int i=1;i<=n-1;i++){

		if(arr[i]>largest){
		largest=arr[i];

	}

	}
	cout<<"largest is : "<<largest<<endl;

	




	return 0;
}