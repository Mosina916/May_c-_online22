#include<iostream>
using namespace std;
int totalways(int x,int y){
	// base case
	if(x==0 and y==0){
		return 1;
	}




	// rec case
	int ans=0;
	// row ka sum
	for(int i=0;i<=x-1;i++){
		ans=ans+totalways(i,y);

	}
	// col ka sum
	for(int j=0;j<=y-1;j++){
		ans=ans+totalways(x,j);
	}

	return ans;

}


// top down

int tdtotalways(int x,int y,int arr[100][100]){
	// base case
	if(x==0 and y==0){
		return arr[x][y]=1;
	}

	if(arr[x][y]!=0){
		return arr[x][y];
	}


	// rec case
	int ans=0;
	// row ka sum
	for(int i=0;i<=x-1;i++){
		ans=ans+tdtotalways(i,y,arr);

	}
	// col ka sum
	for(int j=0;j<=y-1;j++){
		ans=ans+tdtotalways(x,j,arr);
	}

	return arr[x][y]=ans;

}



// bottomup()
int bottomup(int x,int y){
	int arr[100][100];

	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++){
		if(i==0 and j==0){
		arr[i][j]=1;
	}
	else{
		int ans=0;
		// col

		for(int k=0;k<i;k++){
			ans+=arr[k][j];
		}
		// row sum
		for(int l=0;l<j;l++){
			ans+=arr[i][l];
		}

		arr[i][j]=ans;
		}

	}

	}


	return arr[x][y];


}
int main(){
	int x,y;
	cin>>x>>y;

	int arr[100][100];
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			arr[i][j]=0;

		}
	}

	cout<<tdtotalways(x,y,arr)<<endl;

	cout<<bottomup(x,y)<<endl;

	cout<<totalways(x,y)<<endl;


	return 0;
}