#include <iostream>
using namespace std;
int main(){
	
	// int arr[]={2,4,3,6,5,7,1,1,0,6};
	// int n=sizeof(arr)/sizeof(int);

	// // int arr[1000];


	cout<<"before sorting "<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	// bubble sort

	for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);

			

		}

	}


	}
	


// 	for(int i=1;i<=n-1;i++){//i=4

// 	for(int j=0;j<=n-1-i;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);

// 		}

// 	}
// }


int arr[10000];
int n;
cin>>n;

for(int i=0;i<n;i++){
	cin>>arr[i];//3/2/2/5/4-->2 2 3 4 5
}
sort(arr,arr+n);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

cout<<endl;


// sort(arrayname,arrayname+n);
	

	

	// for(int j=0;j<=n-3;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);

	// 	}

	// }

	// i=2

	// for(int j=0;j<=n-4;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);

	// 	}

	// }

	// for(int j=0;j<=0;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);

	// 	}

	// }




	// cout<<"After sorting "<<endl;


	// for(int i=0;i<=n-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;


	




	return 0;
}