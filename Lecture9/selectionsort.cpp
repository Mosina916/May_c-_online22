#include <iostream>
using namespace std;
int main(){
	int arr[]={4,3,1,6,2};
	int n=sizeof(arr)/sizeof(int);

	for(int pos=0;pos<=n-2;pos++){//4
	int min=pos;
	for(int j=pos+1;j<=n-1;j++){
		if(arr[j]<arr[min]){
			min=j;
		}
	}
	swap(arr[min],arr[pos]);
}


	

	cout<<"After sorting "<<endl;


	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	




	return 0;
}