#include<iostream>
using namespace std;
// rec sol
int fibo(int pos){
	// base case
	if(pos==0||pos==1){
		return pos;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);
}
// top down approach
int topdownfibo(int pos,int *dp){//3
	// base case
	if(pos==0||pos==1){
		return dp[pos]=pos;
	}

	// calculate karne se pehle check already calculated tou nahi hai 
	if(dp[pos]!=-1){
		return dp[pos];
	}

	// rec case
	return dp[pos]=topdownfibo(pos-1,dp)+topdownfibo(pos-2,dp);
}


int bottomup(int pos){
	 // base case of rec function initilization condition
	int *dp=new int[pos+1];
	dp[0]=0;
	dp[1]=1;

	for(int i=2;i<=pos;i++){
		dp[i]=dp[i-1]+dp[i-2];

	}
	cout<<endl;

	for (int i = 0; i <=pos; ++i)
	{
		cout<<dp[i]<<" ";
	}

	cout<<endl;


	return dp[pos];

}

int main(){
	// int arr[10]={0};
	int n;
	cin>>n;//5
	int *dp=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		dp[i]=-1;//-1 will represnt abhi tak uss index ka ans nahi aaya hai

	}


	cout<<topdownfibo(n,dp)<<endl;//topdown



	for (int i = 0; i <=n; ++i)
	{
		cout<<dp[i]<<" ";
	}
	cout<<endl;


	cout<<bottomup(n)<<endl;
	cout<<fibo(n)<<endl;//simple rec 

	

	// memset(arr,-1,sizeof(arr));



	return 0;
}