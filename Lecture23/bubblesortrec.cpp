#include<iostream>
using namespace std;
// void bubllesortrec(int arr[],int n,int i){ //4
// 	// base case
// 	if(i==n-1){
// 		return;

// 	}
// 	// rec case
// 	for(int j=0;j<=n-2-i;j++){
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);

			


// 		}

// 	}
// 	// 4 3 2 1 5  3 2 1 4 5    2 1 3 4 5  1 2 3 4 5
// 	bubllesortrec(arr,n,i+1); //4


// }

void bubblesortpuresrec(int arr[],int n,int i,int j){
		// base case
	if(i==n-1){
		return;

	}

	if(j==n-1-i){
		bubblesortpuresrec(arr,n,i+1,0);

	}
	else{
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);

			


		}
		bubblesortpuresrec(arr,n,i,j+1);


	}

	// rec case
	

}
int main(){
	int arr[]={5,4,0,3,4,4,4,2,6,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	// bubllesortrec(arr,n,0);

	bubblesortpuresrec(arr,n,0,0);

	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	return 0;
}