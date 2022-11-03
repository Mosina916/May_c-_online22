#include<iostream>
using namespace std;
int maxprofitaftersellingwinebottles(int *cost,int n,int l,int r,int day){
	// base case
	if(l>r){
		return 0;

	}


	// rec case
	int op1=cost[l]*day+maxprofitaftersellingwinebottles(cost,n,l+1,r,day+1);
	int op2=cost[r]*day+maxprofitaftersellingwinebottles(cost,n,l,r-1,day+1);

	return max(op1,op2);


}
// top down

int tdmaxprofitaftersellingwinebottles(int *cost,int n,int l,int r,int day,int arr[100][100]){
	// base case
	if(l>r){
		return arr[l][r]=0;

	}
	if(arr[l][r]!=0){
		return arr[l][r];
	}


	// rec case
	int op1=cost[l]*day+tdmaxprofitaftersellingwinebottles(cost,n,l+1,r,day+1,arr);
	int op2=cost[r]*day+tdmaxprofitaftersellingwinebottles(cost,n,l,r-1,day+1,arr);

	return arr[l][r]=max(op1,op2);


}

// bottomup
int bottomup(int *cost,int l,int r,int n){
	// int arr[100][100]={0};
	int arr[100][100];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=0;

		}
	}
	// diagonal fill
	for(int i=0;i<n;i++){
		arr[i][i]=n*cost[i];
	}


	for(int i=n-2;i>=0;i--){
		for(int j=0;j<n;j++){
		if(j>i){
		int day=n-(j-i);
		int op1=day*cost[i]+arr[i+1][j];
		int op2=day*cost[j]+arr[i][j-1];
		arr[i][j]=max(op1,op2);

	}

	}

	}

	for(int k=0;k<n;k++){
		for(int l=0;l<n;l++){
			cout<<arr[k][l]<<" ";
		}
		cout<<endl;
	}

	cout<<endl;


	return arr[0][n-1];

	
	





}



int main(){
	int cost[]={2,3,5,1,4};
	int n=sizeof(cost)/sizeof(int);

	cout<<maxprofitaftersellingwinebottles(cost,n,0,n-1,1)<<endl;
	// int **arr=new int*[n];
	// for(int i=0;i<n;i++){
	// 	arr[i]=new int[n];
	// }


	int arr[100][100];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]=0;

		}
	}

	cout<<tdmaxprofitaftersellingwinebottles(cost,n,0,n-1,1,arr)<<endl;

	cout<<bottomup(cost,0,n-1,n)<<endl;

	

	return 0;
}