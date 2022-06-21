#include <iostream>
using namespace std;
int main(){
	// linear search 
	// 1 2 3 4 5 6 7 8
	int arr[]={4,1,8,8,6,9,6,6,6,6,6,3};
	int n=sizeof(arr)/sizeof(int);

	int key=6;
	int i;

	for(i=0;i<=n-1;i++){
		if(key==arr[i]){
		// tou haan key present hai
			cout<<"key is present at index "<<i<<endl;
			break;

	}


	}
	if(i==n){
		cout<<"key is not present"<<endl;
	}
	



	return 0;
}