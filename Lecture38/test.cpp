#include<iostream>
using namespace std;
int minstepsto1(int n){
	// base case
	if(n==1){
		return 0;
	}
	// rec case
	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=minstepsto1(n-1);

	if(n%2==0){
		op2=minstepsto1(n/2);

	}

	if(n%3==0){
		op3=minstepsto1(n/3);
	}

	return min(op1,min(op2,op3))+1;
}

// topdown
int topdownminstepsto1(int n,int*dp){
	// base case
	if(n==1){
		return dp[n]=0;
	}
	// calculate karne se pehle check
	if(dp[n]!=-1){
		return dp[n];

	}
	// rec case

	int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=topdownminstepsto1(n-1,dp);

	if(n%2==0){
		op2=topdownminstepsto1(n/2,dp);

	}

	if(n%3==0){
		op3=topdownminstepsto1(n/3,dp);
	}

	return dp[n]=min(op1,min(op2,op3))+1;
}

// bottom up 
int bottomup(int n){
	int *arr=new int[n+1];
	arr[1]=0;
	for(int i=2;i<=n;i++){
		int op1=INT_MAX,op2=INT_MAX,op3=INT_MAX;
	op1=arr[i-1];//1
	if(i%2==0){
		op2=arr[i/2];//int_max

	}

	if(i%3==0){
		op2=arr[i/3];//0
		
	}
	arr[i]=min(op1,min(op2,op3))+1;

	}
		cout<<endl;
	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;



	return arr[n];



	



}

int main(){
	int n;
	cin>>n;
	

	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}

	cout<<topdownminstepsto1(n,arr)<<endl;

	for (int i = 0; i <=n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;

	cout<<bottomup(n)<<endl;



	cout<<minstepsto1(n)<<endl;


	return 0;
}