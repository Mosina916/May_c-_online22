#include<iostream>
using namespace std;
void waveprint(int arr[100][100],int trows,int tcols){
	for(int colno=0;colno<=tcols-1;colno++){
		if(colno%2==0){
		// even col hai tou downward dir mai print karna hai
		for(int rowno=0;rowno<=trows-1;rowno++){
			cout<<arr[rowno][colno]<<" ";

		}
		
	}
	else{
		// odd col hai tou upward dir mai print karna hai
		for(int rowno=trows-1;rowno>=0;rowno--){
			cout<<arr[rowno][colno]<<" ";

		}
		
	}

	}
	



}

int main(){
	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;////4 4

	// input 

	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];
	}

	}

	waveprint(arr,rows,cols);
	




	return 0;
}