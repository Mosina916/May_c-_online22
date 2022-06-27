#include <iostream>
using namespace std;
int main(){

	// int arr[]={4,5,2,3,2}; //sort--> 2 2 3 4 5
	// // int arr[]={5,4,2,1};//sort -->1 2 4 5
	// int arr[]={3,4,5,6,7};//sort -->3 4 5 6 7

	
	// int arr[]={2,4,3,6,5,7,1,1,0,6};
	// int n=sizeof(arr)/sizeof(int);

	// // int arr[1000];


	// cout<<"before sorting "<<endl;
	// for(int i=0;i<=n-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;


	int arr[]={5,1,2,3,4};
	int n=sizeof(arr)/sizeof(int);

	// bubble sort

	// for(int i=0;i<=n-2;i++){//1<=3

	// 	for(int j=0;j<=n-2-i;j++){//1<=3
	// 	if(arr[j]>arr[j+1]){
		
	// 		// on line swap
	// 		arr[j+1]=(arr[j]+arr[j+1])-(arr[j]=arr[j+1]);


	// 	}

	// }


	// }


	for(int i=0;i<=n-2;i++){//1<=3
		bool kyaswaphorahahai=false;
		
		for(int j=0;j<=n-2-i;j++){//1<=3
		if(arr[j]>arr[j+1]){

			swap(arr[j],arr[j+1]);
			kyaswaphorahahai=true;
		}

	}
	if(kyaswaphorahahai==false){
		break;

	}
	}



// 	for(int i=1;i<=n-1;i++){//i=4

// 	for(int j=0;j<=n-1-i;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);

// 		}

// 	}
// }


// int arr[10000];
// int n;
// cin>>n;

// for(int i=0;i<n;i++){
// 	cin>>arr[i];//3/2/2/5/4-->2 2 3 4 5
// }
// sort(arr,arr+n);

// for(int i=0;i<n;i++){
// 	cout<<arr[i]<<" ";
// }

// cout<<endl;






	cout<<"After sorting "<<endl;


	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	




	return 0;
}