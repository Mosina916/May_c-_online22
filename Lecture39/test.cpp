#include<iostream>
using namespace std;
int mincoinsneededtomaketheamount(int coins[],int amount,int n){
	// base case
	if(amount==0){
		return 0;
	}
	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachahuvaamount=amount-coins[i];//15-20=-5
	if(bachahuvaamount>=0){
		int bachhuvicoinskaans=mincoinsneededtomaketheamount(coins,bachahuvaamount,n);//2
		if(bachhuvicoinskaans<ans){
			ans=bachhuvicoinskaans+1;//1
		}

	}

	}
	return ans;

}

// top down
int tdmincoinsneededtomaketheamount(int coins[],int amount,int n,int *arr){
	// base case
	if(amount==0){
		return arr[amount]=0;
	}
	// calculate karne se pehle check
	if(arr[amount]!=-1){
		return arr[amount];

	}

	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++){
		int bachahuvaamount=amount-coins[i];//15-20=-5
	if(bachahuvaamount>=0){
		int bachhuvicoinskaans=tdmincoinsneededtomaketheamount(coins,bachahuvaamount,n,arr);//2
		if(bachhuvicoinskaans<ans){
			ans=bachhuvicoinskaans+1;//1
		}

	}

	}


	return arr[amount]=ans;

}

// bottom up 

int bottomup(int *coins,int amount,int n){
	int *arr=new int[amount+1];
	arr[0]=0;
	for(int i=1;i<=amount;i++){
		arr[i]=INT_MAX;
	}
	for(int i=1;i<=amount;i++){
		for(int j=0;j<n;j++){
		int bachaamountkaindex=i-coins[j];//12-10;//2
	if(bachaamountkaindex>=0){
		arr[i]=min(arr[bachaamountkaindex]+1,arr[i]);
	}

	}
	}
	return arr[amount];

}

int main(){
	int coins[]={1,7,10};
	int n=sizeof(coins)/sizeof(int);

	int amount;
	cin>>amount;//15
	int *arr=new int[amount+1];
	for (int i = 0; i <=amount; ++i)
	{
		arr[i]=-1;
	}

	cout<<tdmincoinsneededtomaketheamount(coins,amount,n,arr)<<endl;
	cout<<bottomup(coins,amount,n)<<endl;
	cout<<mincoinsneededtomaketheamount(coins,amount,n)<<endl;

	return 0;
}