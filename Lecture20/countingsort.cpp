#include<iostream>
using namespace std;

int main(){
	// 0--10
	int arr[]={10,2,2,3,1,6,3,8,7,7,9,0,0,0,4,5,10};
	int n=sizeof(arr)/sizeof(int);

	int countarr[11]={0};

	for(int i=0;i<n;i++){
		countarr[arr[i]]++;

	}

	for(int j=0;j<=1000;j++){
		int times=countarr[j];//2

		for(int t=1;t<=times;t++){
			cout<<j<<" ";
		}
		
			
		

	}

	cout<<endl;

	







	
	return 0;
}