#include<iostream>
using namespace std;
// void mergetwosortedarrays(int arr1[],int arr2[],int n1,int n2){
// 	int temp[10000];
// 	int i=0,j=0,k=0;
// // loop
// 	while(j<=n2-1 and i<=n1-1){
// 		if(arr1[i]<arr2[j]){ //2<0 2<1 2<3 4<3
// 		temp[k]=arr1[i];
// 		i++;
// 		k++;

// 	}
// 	else{
// 		temp[k]=arr2[j];
// 		j++;
// 		k++;
// 	}

// 	}
// 	// j-->n2 arr1 wali array is remaining

// // loop
// 	while(i<=n1-1){
// 			temp[k]=arr1[i];
// 			k++;
// 			i++;

// 	}
// 	// i-->n1-->arr2 is remaining
// 	// loop
// 	while(j<=n2-1){
// 		temp[k]=arr2[j];
// 	k++;
// 	j++;

// 	}

// 	for(int l=0;l<k;l++){
// 		cout<<temp[l]<<" ";
// 	}
// 	cout<<endl;
// 


void mergetwosortedarrays(int arr[],int s,int e){
	int temp[10000];
	// int i=0,j=0,k=0;
	int i=s;//0
	int mid=(s+e)/2;//2
	int j=mid+1;//3
	int k=s;//0


// loop
	while(j<=e and i<=mid){
		if(arr[i]<arr[j]){ //3<1
		temp[k]=arr[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr[j];
		j++;
		k++;
	}

	}
	// j-->n2 arr1 wali array is remaining

// loop
	while(i<=mid){
			temp[k]=arr[i];
			k++;
			i++;

	}
	// i-->n1-->arr2 is remaining
	// loop
	while(j<=e){
		temp[k]=arr[j];
	k++;
	j++;

	}



	// copy back arr from temp to arr
	for(int l=0;l<k;l++){
		arr[l]=temp[l];

	}
	
}
void mergesort(int arr[],int s,int e){
	// base case
	if(s==e){
		return;

	}


	// recusrive case
	// step1 divide through mid
	int mid=(s+e)/2;//2



	// step 2 sort 2 parts
	mergesort(arr,s,mid);//3 4 5
	mergesort(arr,mid+1,e);//


	// step 3  merge two sorted parts

	mergetwosortedarrays(arr,s,e);

}


int main(){
	int arr[]={4,0,0,4,3,5,5,5,3,9,5,3,2,1};
	
	int n=sizeof(arr)/sizeof(int);

	mergesort(arr,0,n-1);


	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
	
	


	


	return 0;
}