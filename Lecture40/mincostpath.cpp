#include<iostream>
using namespace std;
int mincostpath(int cost[][4],int i,int j){
	// base case
	if(i==0 and j==0){
		return cost[i][j];

	}


	if(i<0 || j<0){
		return INT_MAX;

	}


	// rec case
	int op1=mincostpath(cost,i-1,j);
	int op2=mincostpath(cost,i,j-1);
	return min(op1,op2)+cost[i][j];

}

// top down
int tdmincostpath(int cost[][4],int i,int j,int arr[100][100]){
	// base case
	if(i==0 and j==0){
		return arr[i][j]=cost[i][j];

	}


	if(i<0 || j<0){
		return INT_MAX;

	}

	if(arr[i][j]!=-1){
		return arr[i][j];
	}


	// rec case
	int op1=tdmincostpath(cost,i-1,j,arr);
	int op2=tdmincostpath(cost,i,j-1,arr);
	return arr[i][j]=min(op1,op2)+cost[i][j];

}

// bottom up
int bottomup(int cost[][4],int x,int y){
	int dp[100][100];
	

	
	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++){
			if(i==0 and j==0){
		// initilization 
	dp[i][j]=cost[i][j];
	}

	// first row
	else if(i==0){
		dp[i][j]=dp[i][j-1]+cost[i][j];

	}
	// first col

	else if(j==0){
		dp[i][j]=dp[i-1][j]+cost[i][j];


	}
	else{
		dp[i][j]=min(dp[i-1][j],dp[i][j-1])+cost[i][j];
	}

		}

	

	}

	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++){
			cout<<dp[i][j]<<" ";


		}

		cout<<endl;
	}
	cout<<endl;

	return dp[x][y];




}

int main(){
	int cost[][4]={
		{2,1,3,4},
		{3,1,1,10},
		{1,6,1,1},
		{2,7,4,3}

	};
	int x,y;
	cin>>x>>y;




	
	int arr[100][100];

	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			arr[i][j]=-1;


		}
	}

	cout<<tdmincostpath(cost,x,y,arr)<<endl;

	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++){
			cout<<arr[i][j]<<" ";


		}

		cout<<endl;
	}

	cout<<endl;
	cout<<bottomup(cost,x,y)<<endl;

	// normal rec
	cout<<mincostpath(cost,x,y)<<endl;



	return 0;
}