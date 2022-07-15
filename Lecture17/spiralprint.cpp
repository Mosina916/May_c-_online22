#include<iostream>
using namespace std;
void spriarlprint(int arr[100][100],int trows,int tcols){
	int sr=0,sc=0,ec=tcols-1,er=trows-1;


// work for every square matrix
// loop
	while(sc<=ec && sr<=er){

		// ist row print
	for(int j=sc;j<=ec;j++){
		cout<<arr[sr][j]<<" ";

	}
	sr++;
	// last col

	for(int i=sr;i<=er;i++){//i-->3
		cout<<arr[i][ec]<<" ";
	}
	ec--;
	// last row
	if(sr<=er){
		for(int k=ec;k>=sc;k--){
		cout<<arr[er][k]<<" ";

	}
	er--;

	}
	// ist col
	if(sc<=ec){

	for(int l=er;l>=sr;l--){//3
		cout<<arr[l][sc]<<" ";

	}
	sc++;

	}


	}

	
	
	

}
int main(){
	// int arr[4][4]={
	// 	{4,3,1,6},
	// 	{9,17,30,14},
	// 	{3,9,60,49},
	// 	{33,49,63,79}

	// };

	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//6 3
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
			cin>>arr[i][j];
		}
	}



	// spriarlprint(arr,4,4);
	spriarlprint(arr,rows,cols);

	return 0;
}